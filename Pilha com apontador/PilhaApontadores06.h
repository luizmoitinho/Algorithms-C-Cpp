typedef struct nodoPilha *Apontador;

typedef struct{
    int chave;
    //outros campos....

}Tinfo;
struct nodoPilha{
    Tinfo item;
    nodoPilha * proximo;
};
typedef struct{
    Apontador primeiro;
    Apontador ultimo;
}Tpilha;

void cria(Tpilha &pilha){
    pilha.primeiro=(Apontador) malloc(sizeof (struct nodoPilha));
    pilha.primeiro->proximo = NULL;
    pilha.ultimo = pilha.primeiro;
}

bool vazia(Tpilha pilha){
    return pilha.ultimo == pilha.primeiro? true : false;
}
void setDados(Tinfo &item){
    cout<<"\n\t\tInforme o valor a ser inserido : ";
    cin>>item.chave;
}

void empilha(Tpilha &pilha, Tinfo item){
    Apontador aux = (Apontador) malloc(sizeof(struct nodoPilha));
    aux->item = item;

    pilha.ultimo->proximo = aux;
    pilha.ultimo = aux;

    pilha.ultimo->proximo = NULL;


}
void desempilha(Tpilha &pilha){
    Apontador atual = pilha.primeiro;
    Apontador posterior = pilha.primeiro->proximo;

    while(posterior->proximo!=NULL){
        atual= posterior;
        posterior = posterior->proximo;
    }
    atual->proximo = pilha.ultimo->proximo;
    pilha.ultimo = atual;
    if(pilha.primeiro->proximo ==NULL)
        pilha.primeiro = pilha.ultimo;
}
Tinfo topo(Tpilha pilha){
    Apontador aux = pilha.primeiro->proximo;
    while(aux->proximo!=NULL){
        aux = aux->proximo;
    }
    return aux->item;
}

void imprime(Tpilha pilha){
    Apontador p = pilha.primeiro->proximo;
    int i=1;
    while(p!=NULL){
        printf("\n\t\t %2d - %d ",i,p->item);
        i++;
        p=p->proximo;
    }


}
