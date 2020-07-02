//----FILA IMPLEMENTADA POR MEIO DE ARRANJO----
const int Tmax = 10;

typedef int Apontador;

typedef struct  {
    int Chave;
    /*outros componentes*/
} TInfo;

typedef struct {
    TInfo Item[Tmax];
    Apontador Primeiro;
    Apontador Ultimo;
    int Total;
} TFila;

//---------------------------------------------
void QInit (TFila& Fila) {
    Fila.Primeiro = 0;
    Fila.Ultimo = 0;
    Fila.Total = 0;
}
//---------------------------------------------
bool QisEmpty (TFila Fila) {
    return Fila.Total==0?true:false;
}
//---------------------------------------------
bool QisFull (TFila Fila) {
	return Fila.Total==Tmax?true:false;
}
//---------------------------------------------
void adc (int& pos) {
    pos++;
    if (pos==Tmax)
        pos = 0;
}
//---------------------------------------------
void enQueue (TFila& Fila, TInfo Item) {
	if (QisFull(Fila))
	    cout << "Erro: A Fila está cheia" << endl;
	else {
	    Fila.Item[Fila.Ultimo] = Item;
	    adc(Fila.Ultimo);
		Fila.Total++;
    }
}
//---------------------------------------------
 void deQueue (TFila& Fila) {
	if (QisEmpty(Fila))
	    cout << "Erro : A Fila está vazia.\n" << endl;
    else {
        adc(Fila.Primeiro);
        Fila.Total--;
    }
}
//---------------------------------------------
 void Print(TFila Fila) {
    cout << "Itens na Fila: " << endl;
	if (QisEmpty(Fila))
        cout << "Fila está vazia." << endl;
	else {
        int p = Fila.Primeiro;
        for (int aux = 1; aux <= Fila.Total; aux++) {
			 cout << Fila.Item[p].Chave << " ";
			 adc(p);
	    }
		cout << endl;
	}
	cout << "\nPRIMEIRO = " << Fila.Primeiro << endl;
	cout << "ULTIMO = " << Fila.Ultimo << endl;
    cout << "TOTAL = " << Fila.Total << endl;
}
//---------------------------------------------
