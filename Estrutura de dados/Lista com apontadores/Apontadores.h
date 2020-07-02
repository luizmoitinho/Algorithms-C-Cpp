typedef struct nodoLista * Apontador;

typedef struct {
    char codigo[5]=" ",cidade[50]=" ",estadoVia[10]=" ",data[11]=" "
    ,dia[15]=" ",hora[7]=" " ,ocorrido[30]=" ",mortos[2]=" ",feridos[2]=" ",descricao[200]=" ";
}Tinfo;

struct nodoLista{
    Tinfo item;
    Apontador proximo;
};
typedef struct {
    Apontador primeiro;
    Apontador ultimo;
}Tlista;



void criaLista(Tlista &lista){
    lista.primeiro = (Apontador) malloc(sizeof(struct nodoLista)) ;
    lista.ultimo = lista.primeiro;
    lista.primeiro->proximo==NULL;
}

bool vazia(Tlista &lista){
    return lista.primeiro == lista.ultimo ? true:false;
}

void setPosicao(int &posicao){
    cout<<"\n\t\tInforme a posição : ";
    cin>>posicao;
}
void setDados(Tlista &lista,Tinfo &cadastro){
     system("cls");
    fflush(stdin);
    cout<<"\n\t\t\t CADASTRO DE ACIDENTES\n\n";
    cout<<"\n\t\tCódigo............: ";
    cin.getline(cadastro.codigo,5);
        cout<<"\n\t\tCidade............: ";
        cin.getline(cadastro.cidade,20);
        cout<<"\n\t\tEstado/via........: ";
        cin.getline(cadastro.estadoVia,7);
        cout<<"\n\t\tData...............: ";
        cin.getline(cadastro.data,11);
        cout<<"\n\t\tDia...............: ";
        cin.getline(cadastro.dia,15);
        cout<<"\n\t\tHora..............: ";
        cin.getline(cadastro.hora,5);
        cout<<"\n\t\tOcorrido..........: ";
        cin.getline(cadastro.ocorrido,30);
        cout<<"\n\t\tMortos............: ";
        cin.getline(cadastro.mortos,2);
        cout<<"\n\t\tFeridos...........: ";
        cin.getline(cadastro.feridos,2);
        cout<<"\n\t\tDescrição.........: ";
        cin.getline(cadastro.descricao,200);


}
void procurarAcidente(Tlista &lista, Tinfo item){
    if (vazia(lista))
         cerr<<"\n\t\t\tAviso :  A lista está vazia!\n";
    else{
           int i=0;
           Apontador p ;
           p = lista.primeiro->proximo;
          while(p!=NULL){
             if(strcmp(p->item.codigo,item.codigo)==0){
                 cout<<"\n\t\t ACIDENTES LOCALIZADO";
                  cout<<"\n\t\t______________________________________________________________\n";
                  cout<<"\n\t\tCódigo......: "<<p->item.codigo;
                  cout<<"\n\t\tCidade......: "<<p->item.cidade;
                  cout<<"\n\t\tEstado/via..: "<<p->item.estadoVia;
                  cout<<"\n\t\tData........: "<<p->item.data;
                  cout<<"\n\t\tDia.........: "<<p->item.dia;
                  cout<<"\n\t\tHora........: "<<p->item.hora;
                  cout<<"\n\t\tOcorrido....: "<<p->item.ocorrido;
                  cout<<"\n\t\tMortos......: "<<p->item.mortos;
                  cout<<"\n\t\tFeridos.....: "<<p->item.feridos;
                  cout<<"\n\t\tDescriçao...: "<<p->item.descricao;
                  cout<<"\n\t\t______________________________________________________________\n";
                  break;
             }
             p=p->proximo;
        }
       if(p==NULL)
            cerr<<"\n\t\t\tAviso :  Acidente não encontrado!!\n";
    }

}
void insereFinal(Tlista &lista, Tinfo &item){
     Apontador p = (Apontador) malloc(sizeof(struct nodoLista));
    p->item = item;
    p ->proximo = lista.ultimo->proximo;
    lista.ultimo->proximo=p;
    lista.ultimo=p;

}
void imprime(Tlista &lista){
    cout<<"\n\tExibindo dados da lista\n";
    if(vazia(lista))
        cout<<"\t\t\nAlerta: A lista está vazia!\n";
    else{
         Apontador p;
         p = lista.primeiro->proximo;
         while(p!=NULL){
              cout<<"\n\t\t______________________________________________________________\n";
              cout<<"\n\t\tCódigo......: "<<p->item.codigo;
              cout<<"\n\t\tCidade......: "<<p->item.cidade;
              cout<<"\n\t\tEstado/via..: "<<p->item.estadoVia;
              cout<<"\n\t\tData........: "<<p->item.data;
              cout<<"\n\t\tDia.........: "<<p->item.dia;
              cout<<"\n\t\tHora........: "<<p->item.hora;
              cout<<"\n\t\tOcorrido....: "<<p->item.ocorrido;
              cout<<"\n\t\tMortos......: "<<p->item.mortos;
              cout<<"\n\t\tFeridos.....: "<<p->item.feridos;
              cout<<"\n\t\tDescriçao...: "<<p->item.descricao;
              cout<<"\n\t\t______________________________________________________________\n";
              p=p->proximo;
          }
    }
    cout<<endl;

}

void insereInicio(Tlista & lista, Tinfo item){
    Apontador p = (Apontador) malloc(sizeof(struct nodoLista));
    p->item= item;
    p->proximo = lista.primeiro->proximo;
    lista.primeiro->proximo = p;
    if(p->proximo==NULL)
        lista.ultimo = p;
    cout<<"\n\tItem inserido no inicio!\n";
}
void removeInicio(Tlista&lista){
    if(vazia(lista))
        cout<<"\n\t\tERRO : Lista está vazia!\n";
    else{
        Apontador p;
        p = lista.primeiro->proximo;

        lista.primeiro->proximo=p->proximo;
        if (lista.primeiro->proximo==NULL)
            lista.ultimo = lista.primeiro;
       cout<<"\n\t\tItem "<<p->item.codigo<<" removido\n";
       free(p);
    }

}

void removeFinal(Tlista &lista){

    if(vazia(lista))
         cout<<"\n\t\tERRO : Lista está vazia!\n";
    else{
        Apontador p1;
        p1 = lista.primeiro->proximo;
        if(lista.primeiro->proximo->proximo==NULL )
            lista.primeiro = lista.ultimo;
        else{
            Apontador p2 = lista.primeiro->proximo;
            p2 = p2->proximo;
            while(p2->proximo!=NULL){
                p1 = p1->proximo;
                p2 = p2->proximo;
            }
            lista.ultimo =p1;
            lista.ultimo->proximo=NULL;
            free(p1);
            free(p2);
        }

    }


}
void pesquisaRemove(Tlista &lista , Tinfo item){
    if(vazia(lista))
        cout<<"\n\t\tERRO : A lista está vazia\n";
    else{
        bool status=false;
        Apontador anterior = lista.primeiro;
        Apontador posterior = lista.primeiro->proximo;
        do{
            if(strcmp(posterior->item.codigo,item.codigo)==0){
                anterior->proximo = posterior->proximo;
                status = true;
            }else if(strcmp(posterior->item.codigo,item.codigo)==0 && posterior->proximo==NULL){
                anterior->proximo = NULL;
                lista.ultimo = anterior;
                status =true;
            }
            anterior = posterior;
            posterior = posterior->proximo;
        }while(posterior!=NULL);
         if(!status)
                cout<<"\nItem nao localizado!\n";
        else
            cout<<"\nItem removido!\n";
         if(lista.primeiro->proximo==NULL)
                    lista.ultimo=lista.primeiro;

    }

}
void inserePosicao(Tlista &lista, Tinfo item, int posicao){
    int cont=1,tot=0;
    Apontador armazena = (Apontador) malloc(sizeof(struct nodoLista));
    armazena->item = item;
    Apontador anterior = lista.primeiro;
    Apontador posterior = lista.primeiro->proximo;
    Apontador aux = lista.primeiro->proximo;
    while(aux!=NULL){
        tot++;
        aux = aux->proximo;
    }

       do{
            if(lista.primeiro->proximo==NULL){
               anterior->proximo= armazena;
               lista.ultimo =armazena;

               break;
            }else if(posterior!=NULL && cont==posicao){
                armazena->proximo = posterior;
                anterior->proximo = armazena;
                lista.ultimo = posterior;

                break;
            }
            else{
                armazena ->proximo = lista.ultimo->proximo;
                lista.ultimo->proximo=armazena;
                lista.ultimo=armazena;
                break;
            }
            cont++;
            anterior = posterior;
            posterior = posterior->proximo;
        }while(posterior!=NULL);
        if(posterior==NULL){

        }
        if(lista.primeiro->proximo==NULL)
            lista.ultimo = lista.primeiro;

    cout<<"\n\tItem inserido com sucesso!!\n";

}

void atualizaArquivo(Tlista &lista){
ofstream arquivo("acidentes.txt",ios::trunc|ios::out);
    Apontador p = lista.primeiro->proximo;
    while(p!=NULL){
        arquivo<<p->item.codigo<<";"
        <<p->item.cidade<<";"
        <<p->item.estadoVia<<";"
        <<p->item.data<<";"
        <<p->item.dia<<";"
        <<p->item.hora<<";"
        <<p->item.ocorrido<<";"
        <<p->item.mortos<<";"
        <<p->item.feridos<<";"
        <<p->item.descricao<<"\n";
        p=p->proximo;
    }
    arquivo.close();
}
void carregaArquivo(Tlista &lista){
    char dados;
    int delimitador=0,i=0;
    ifstream arquivo;
    arquivo.open("acidentes.txt",ios::in);
        if(arquivo.fail())
           cerr<<"\n\n Aviso :  Arquivo não encontrado!!\n";
       else{
        string codigo,cidade,estadoVia,data,dia,hora,ocorrido,mortos,feridos,descricao;
        Tinfo aux;
        while(!arquivo.eof()){
             arquivo.get(dados);
             if(dados!= '\n'){
                 if(dados!=';'){
                    switch(delimitador){
                        case 0 :
                            aux.codigo[i]=dados;
                            i++;
                            break;
                        case 1 :
                            aux.cidade[i]=dados;
                            i++;
                            break;
                        case 2 :
                            aux.estadoVia[i]=dados;
                            i++;
                            break;
                        case 3 :
                            aux.data[i]=dados;
                            i++;
                            break;
                        case 4 :
                            aux.dia[i]=dados;
                            i++;
                            break;
                        case 5 :
                            aux.hora[i]=dados;
                            i++;
                            break;
                        case 6:
                            aux.ocorrido[i]=dados;
                            i++;
                            break;
                        case 7 :
                            aux.mortos[i]=dados;
                            i++;
                            break;
                        case 8 :
                            aux.feridos[i]=dados;
                            i++;
                            break;
                        case 9 :
                            aux.descricao[i]=dados;
                            i++;
                            break;
                    }

                 }
                 else{
                    i=0;
                    delimitador++;
                 }

             }
             else{
                delimitador=0;
                i=0;
                insereFinal(lista,aux);

                strcpy(aux.cidade,"                 ");



             }


        }
     }
    arquivo.close();
}



