typedef int Apontador;
const int Tmax = 10;

typedef struct{
    int chave;
    //outros componentes
}Tinfo;

typedef struct{
    Tinfo item[Tmax];
    Apontador Topo;
}Tpilha;

void criaPilha(Tpilha &pilha){
    pilha.Topo =-1;
}

bool vazia(Tpilha pilha){
    return pilha.Topo == -1 ? true:false;
}
bool cheia(Tpilha pilha){
    return pilha.Topo >= Tmax -1 ? true:false;
}
void setDados(Tinfo &item){
    cout<<"\n\t\tInforme um valor inteiro : ";
    cin>>item.chave;
}
        // insere na pilha
void empilha(Tpilha &pilha, Tinfo item){
        pilha.item[++pilha.Topo] = item;
}
void desempilha(Tpilha &pilha){
    pilha.Topo--;
}
Tinfo topo(Tpilha pilha){
    return pilha.item[pilha.Topo];
}
void imprime(Tpilha pilha){
    for(int i=0;i<=pilha.Topo;i++)
        printf("\n\t\t %2d - %2d",i+1,pilha.item[i]);
}

