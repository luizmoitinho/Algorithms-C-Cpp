typedef int Apontador;

const int Tmax =9;

typedef struct {
    int item;
    //outros itens
}Tinfo;

typedef struct{
  Apontador item[Tmax];
  Apontador primeiro;
  Apontador ultimo;
  Apontador total;

}Tfila;


void criaFila(Tfila &l){
    l.primeiro=0;
    l.ultimo=0;
}
bool isFull(Tfila &l){
    return l.total==Tmax? true:false;
}

void adc(Tlista &p){
    p++;
    if(p==Tmax)
        p=0;

}
void enQueue(Tfila &l, Tinfo &item){
    adc(l.ultimo);
    l.item[l.ultimo] = item;

}


