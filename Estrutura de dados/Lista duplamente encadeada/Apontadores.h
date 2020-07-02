typedef struct nodoLista * Apontador;

typedef struct{
    int chave;
    //outros campos...
}Tinfo;
struct nodoLista {
    Tinfo item;
    Apontador proximo;
    Apontador anterior;
};
typedef struct {
    Apontador primeiro;
    Apontador ultimo;
}Tlista;

void cria(Tlista &lista){
    lista.primeiro = (Apontador) malloc(sizeof(struct nodoLista));
    lista.ultimo = lista.primeiro;
    lista.ultimo->proximo=NULL;
    lista.ultimo->anterior =NULL;
}
bool vazia(Tlista lista){
    return lista.ultimo == lista.primeiro ? true:false;
}

void setDados(Tinfo &item){
    cin>>item.chave;
}
void setPosicao(int &posicao){
    cin>>posicao;
}

void insereInicio(Tlista &lista , Tinfo item){
    Apontador aux = (Apontador) malloc(sizeof(struct nodoLista));
    aux->item = item;
    if(lista.primeiro->proximo!=NULL)
        lista.primeiro->proximo->anterior = aux;
    aux->proximo = lista.primeiro->proximo;
    aux->anterior = lista.primeiro;
    lista.primeiro->proximo = aux;
    if(aux->proximo==NULL)
        lista.ultimo = aux;
}
void insereFinal(Tlista &lista, Tinfo item){
   Apontador aux = (Apontador) malloc(sizeof(struct nodoLista));
   aux->item = item;
   aux->anterior = lista.ultimo;
   aux->proximo =NULL;
   lista.ultimo->proximo = aux;
   lista.ultimo = aux;

}
void removeFinal(Tlista &lista){
    lista.ultimo = lista.ultimo->anterior;
    lista.ultimo->proximo = NULL;
}
void removeInicio(Tlista &lista){
    Apontador aux = lista.primeiro->proximo;
    aux->proximo->anterior = lista.primeiro;
    lista.primeiro->proximo=aux->proximo;

    if(lista.primeiro->proximo ==NULL)
        lista.ultimo = lista.primeiro;




    /*Iif(aux->proximo==NULL)
        removeFinal(lista);
    else{
        lista.primeiro->proximo = aux->proximo;
        aux->proximo->anterior = lista.primeiro;
    }*/

}

void pesquisaRemove(Tlista &lista, Tinfo item){
    Apontador busca = lista.primeiro->proximo;
    while(busca!=NULL){
        if(busca->item.chave == item.chave)
            break;
        busca = busca->proximo;
    }
    if(busca==NULL)
        cerr<<"\n\t\t AVISO : O item não está na lista!";
    else{
       if(busca->proximo==NULL)
            removeFinal(lista);
        else{
            busca->anterior->proximo = busca->proximo;
            busca->proximo->anterior = busca->anterior;
        }
        free(busca);
    }
}
void inserePosicao(Tlista &lista,Tinfo item, int p){
    Apontador busca = lista.primeiro->proximo;
    Apontador aux = (Apontador) malloc(sizeof(struct nodoLista));
    aux->item = item;
    int cont=1;
   do{
        if ( p<=0 || vazia(lista)){
            insereInicio(lista,item);
            cout<<"primeiro if";
            break;
        }
        else if(cont==p){
          aux->proximo = busca;
          aux->anterior = busca->anterior;
          busca ->anterior->proximo = aux;
          busca->anterior = aux;
          cout<<"segundo if";
          break;
        }
        else if(busca->proximo==NULL){
            insereFinal(lista,item);
            cout<<"terceiro";
            break;
        }
        cont++;
        busca = busca->proximo;
    } while(busca!=NULL);


}
void imprime(Tlista lista){
    Apontador aux = lista.primeiro->proximo;
    int i=1;
    cout<<"\n\t\t----IMPRIME NORMAL --- \n";
    while(aux!=NULL){
        printf("\n\t\t %2d - %2d ",i,aux->item.chave);
        aux = aux->proximo;
        i++;
    }
     cout<<"\n\n\t\t----IMPRIME DE INVERSO --- \n";
    aux = lista.ultimo;

    while(aux->anterior!=NULL){
        printf("\n\t\t %2d - %2d ",i,aux->item.chave);
        aux = aux->anterior;
        i--;
    }
    cout<<endl;
}
