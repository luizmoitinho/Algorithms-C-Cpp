//----LISTA IMPLEMENTADA POR MEIO DE APONTADOR----
typedef struct NodoLista *Apontador;

typedef struct  {
    int Chave;
    /*outros componentes*/
} TInfo;

struct NodoLista{
    TInfo Item;
    struct NodoLista *Proximo;
};

typedef struct {
    struct NodoLista *Primeiro;
    struct NodoLista *Ultimo;
} TPilha;

//---------------------------------------------
void Cria (TPilha& Pilha) {
    Pilha.Primeiro = (Apontador) malloc(sizeof(struct NodoLista));
    Pilha.Ultimo = Pilha.Primeiro;
    Pilha.Primeiro->Proximo = NULL;
}
//---------------------------------------------
bool Vazia (TPilha Pilha) {
    return Pilha.Primeiro==Pilha.Ultimo?true:false;
}
//---------------------------------------------
void Empilha (TPilha& Pilha, TInfo Item) {
    Apontador p = (Apontador) malloc(sizeof(struct NodoLista));
    p->Item = Item;
    p->Proximo = Pilha.Primeiro->Proximo;
    Pilha.Primeiro->Proximo = p;

    if (p->Proximo == NULL)
        Pilha.Ultimo = p;
}
//---------------------------------------------
  void Desempilha (TPilha& Pilha) {
	    if (Vazia(Pilha))
	    	cout << "Erro : A Pilha est� vazia.\n" << endl;
	    else {
          Apontador p = Pilha.Primeiro->Proximo;
          cout << "Elemento Removido = " << p->Item.Chave << endl;
          Pilha.Primeiro->Proximo = p->Proximo;
          if (Pilha.Primeiro->Proximo == NULL)
             Pilha.Ultimo = Pilha.Primeiro;
          free(p);
	    }
  }
//---------------------------------------------
   TInfo Topo (TPilha Pilha) {
	    if (Vazia(Pilha))
	    	cout << "Erro : A Pilha est� vazia.\n" << endl;
	    else
	    	return Pilha.Primeiro->Proximo->Item;
}
//---------------------------------------------
  void Imprime (TPilha Pilha) {
    cout << "Itens na PILHA: " << endl;
    if (Vazia(Pilha))
        cout << "Pilha est� vazia." << endl;
    else {
        Apontador aux;
        aux = Pilha.Primeiro->Proximo;
        while (aux != NULL)
        {
            cout << aux->Item.Chave << " ";
            aux = aux->Proximo;
        }
        cout << endl;
    }
}
//---------------------------------------------
























/*
//---------------------------------------------
  void InserePosicao (TLista& Lista, int p, TInfo Item) {

	  if ((Cheia(Lista)) || (p >= Lista.Ultimo))
	      cout << "Erro: A lista est� cheia ou posi��o n�o inv�lida." << endl;
	  else
	  {
		  for (int aux=Lista.Ultimo; aux>=p+1 ; aux--)
			  Lista.Item[aux] = Lista.Item[aux-1];

		  Lista.Item[p] = Item;
		  Lista.Ultimo++;
	  }
  }
//---------------------------------------------
 void InsereFinal (TLista& Lista, TInfo Item) {
	  if (Cheia(Lista))
	      cout << "Erro: A lista est� cheia" << endl;
	  else {
		  Lista.Item[Lista.Ultimo] = Item;
		  Lista.Ultimo++;
	  }
  }
//---------------------------------------------
  void RemoveInicio (TLista& Lista) {
	    if (Vazia(Lista))
	    	cout << "Erro : A lista est� vazia.\n" << endl;
	    else {
	    	for (int aux = Lista.Primeiro; aux < Lista.Ultimo-1; aux++)
	    		Lista.Item[aux] = Lista.Item[aux+1];
	    	Lista.Ultimo--;
	    }
  }
//---------------------------------------------
  void RemovePosicao (TLista& Lista, int p) {
	    if ((Vazia(Lista)) || (p >= Lista.Ultimo)) {
	    	cout << "Erro : A lista est� vazia ou posi��o inv�lida.\n" << endl;
	    }
	    else {
	    	for (int aux = p; aux < Lista.Ultimo-1; aux++)
	    		Lista.Item[aux] = Lista.Item[aux+1];
	    	Lista.Ultimo--;
	    }
}
//---------------------------------------------
  void RemoveFinal(TLista& Lista) {
	    if (Vazia(Lista))
	    	cout << "Erro : A lista est� vazia.\n" << endl;
	    else {
	    	Lista.Ultimo--;
	    }
}
//---------------------------------------------
  void PesquisaRemove (TLista& Lista, int Item) {

	  if (Vazia(Lista))
          cout << "Erro : A lista est� vazia.\n" << endl;
	  else {
		  int aux = Lista.Primeiro;
		  while ((Lista.Item[aux].Chave != Item) && (aux < Lista.Ultimo-2))
			 aux++;

		  if (Lista.Item[aux].Chave == Item) {
			  cout << "Elemento removido = " << Lista.Item[aux].Chave << endl;
			  RemovePosicao(Lista, aux);
		  }
		  else
			  cout << "Elemento n�o encontrado" << endl;
	  }
  }
*/


