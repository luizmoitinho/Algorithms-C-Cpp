typedef int Apontador;
const int MAX =9;

typedef struct{
    char chave;
    //outros componentes
}Tinfo;

typedef struct{
    Tinfo item[MAX];
    Apontador primeiro;
    Apontador ultimo;
    Apontador total;

}Tfila;

void criaFila(Tfila &f){
    f.primeiro=0;
    f.ultimo=0;
    f.total=0;
}

bool isFull(Tfila &f){
    return f.total == MAX ? true: false;
}

bool isEmpty(Tfila &f){
    return f.total == 0 ? true: false;
}

void adc(int &p){
    p++;
    if(p>=MAX)
        p=0;
}

void setItem(Tinfo &item){
    cout<<"\n\t\tInforme o valor do item : ";
    cin>>item.chave;
}


void Enqueue(Tfila &f, Tinfo &item){
    f.item[f.ultimo] = item;
    adc(f.ultimo);
    f.total++;
}

void Dequeue(Tfila &f){
    adc(f.primeiro);
    f.total--;

}
void imprime(Tfila &f){
    int cont=0;
    int posicao = f.primeiro;
    cout<<"Valor de primeiro.:"<<f.primeiro<<endl;
    cout<<"Valor de ultimo...:"<<f.ultimo<<endl;
    cout<<"total.............:"<<f.total<<endl;
    while(cont < f.total){
        cout<<f.item[posicao].chave<<" | ";
        adc(posicao);
        cont++;
    }
}
void FuraFila(Tfila &fila, Tinfo&item){
    if(isFull(fila)){
        cout<<"\t\nA fila está cheia !!\n";
        system("pause");
    }
    else{
        int p = fila.primeiro;
        if(isEmpty(fila)){
            fila.item[fila.primeiro] = item;
            fila.total++;
        }
        else{
            if(p<0)
               p=MAX-1;
            else
                p-=1;

            fila.item[p] = item;
            fila.primeiro=p;
            fila.total++;
        }
    }
}

