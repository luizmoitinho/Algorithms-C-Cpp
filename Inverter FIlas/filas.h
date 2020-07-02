
typedef struct nodoLista *Apontador;

typedef struct{
    int chave;
}Tinfo;

struct nodoLista{
    Tinfo item;
    Apontador proximo;
};
typedef struct{
  Apontador primeiro;
  Apontador ultimo;
}Tlista;
void ordenar(Tlista &lista){
    Apontador p1 = lista.primeiro;
    Apontador p2 = p1->proximo;
    Apontador aux;
    while(p2->proximo!=NULL){
        while(){
            if(p1->item.chave>p2->item.chave){
                aux = p1;
                p1->proximo = p2->proximo;
                p2->proximo=aux;
            }
        }
        p1=p2;
        p2=p2->proximo;
    }
}
void cria(Tlista &l){
    l.primeiro = (Apontador) malloc(sizeof(struct nodoLista));
    l.primeiro->proximo=NULL;
    l.ultimo =l.primeiro;
}

void insereIncio(Tlista &l, Tinfo item){
    Apontador aux  = (Apontador) malloc(sizeof(struct nodoLista));
    aux->item=item;
    aux ->proximo = l.primeiro->proximo;
    l.primeiro->proximo =  aux;
    if(aux->proximo==NULL)
        l.ultimo = aux;
}
void setDados(Tinfo &item){
    cout<<"\tInforme o dado: ";
    cin>>item.chave;
}
bool Vazia(Tlista &l){
    return l.primeiro == l.ultimo? true:false;
}
void Imprime (Tlista Lista) {
    cout << "Itens na LISTA: " << endl;
    if (Vazia(Lista))
        cout << "Lista está vazia." << endl;
    else {
        Apontador aux;
        aux = Lista.primeiro->proximo;
        while (aux != NULL)
        {
            cout << aux->item.chave << " ";
            aux = aux->proximo;
        }
        cout << endl;
    }
}
