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
} TLista;

//---------------------------------------------
void Cria (TLista& Lista) {
    Lista.Primeiro = (Apontador) malloc(sizeof(struct NodoLista));
    Lista.Ultimo = Lista.Primeiro;
    Lista.Primeiro->Proximo = NULL;
}
//---------------------------------------------
bool Vazia (TLista Lista) {
    return Lista.Primeiro==Lista.Ultimo?true:false;
}
//---------------------------------------------
void InsereInicio (TLista& Lista, TInfo Item) {
    Apontador p = (Apontador) malloc(sizeof(struct NodoLista));
    p->Item = Item;
    p->Proximo = Lista.Primeiro->Proximo;
    Lista.Primeiro->Proximo = p;

    if (p->Proximo == NULL)
        Lista.Ultimo = p;
}
//---------------------------------------------
void InserePosicao (TLista& Lista, TInfo Item, int p) {
    if (p == 1)
       InsereInicio(Lista, Item);
    else
    {
       int i;
       Apontador aux;
       i = 1;
       aux = Lista.Primeiro->Proximo;
       while ((i < p-1) && (aux != NULL)) {
           i++;
           aux = aux->Proximo;
       }

       if (aux == NULL)
          cout << "Erro : Posição não existe" << endl;
       else
       {
          Apontador ptr = (Apontador) malloc(sizeof(struct NodoLista));
          ptr->Item = Item;
          ptr->Proximo = aux->Proximo;
          aux->Proximo = ptr;
       }
    }
}
//---------------------------------------------
void RemoveInicio (TLista& Lista) {
	    if (Vazia(Lista))
	    	cout << "Erro : A lista está vazia.\n" << endl;
	    else {
          Apontador p = Lista.Primeiro->Proximo;
          cout << "Elemento Removido = " << p->Item.Chave << endl;
          Lista.Primeiro->Proximo = p->Proximo;
          if (Lista.Primeiro->Proximo == NULL)
             Lista.Ultimo = Lista.Primeiro;
          free(p);
	    }
  }
//---------------------------------------------
void InsereFinal (TLista& Lista, TInfo Item) {
    Apontador p = (Apontador) malloc(sizeof(struct NodoLista));
    p->Item = Item;
    p->Proximo = NULL;
    Lista.Ultimo->Proximo = p;
    Lista.Ultimo = p;
}
//---------------------------------------------
void RemoveFinal (TLista& Lista) {
	if (Vazia(Lista))
	  	cout << "Erro : A Lista está vazia.\n" << endl;
	else {
         Apontador p = Lista.Primeiro->Proximo;
         if (p->Proximo == NULL) {
            Lista.Primeiro->Proximo = NULL;
            Lista.Ultimo = Lista.Primeiro;
         }
         else {
            Apontador aux;
            while (p->Proximo != NULL) {
               aux = p;
               p=p->Proximo;
            }
            aux->Proximo = NULL;
            Lista.Ultimo = aux;
         }
         free(p);
	}
  }
//---------------------------------------------
void RemovePosicao (TLista& Lista, Apontador p){
   if ((Vazia(Lista)) || (p == NULL) || (p->Proximo == NULL))
      cout << "Erro : Lista vazia ou posição não existe\n" << endl;
   else
   {
      Apontador q = p->Proximo;
      p->Proximo = q->Proximo;
      if (p->Proximo == NULL) {
         Lista.Ultimo = p;
      }
      free(q);
   }
}
//---------------------------------------------
void PesquisaRemove (TLista& Lista, TInfo Item) {
	if (Vazia(Lista))
	  	cout << "Erro : A Lista está vazia.\n" << endl;
	else {
        if (Lista.Primeiro->Proximo->Item.Chave == Item.Chave)
           RemoveInicio(Lista);
        else {
           Apontador aux;
           aux = Lista.Primeiro->Proximo;
           while ((aux->Proximo->Item.Chave != Item.Chave) && (aux->Proximo->Proximo != NULL))
                aux = aux->Proximo;

           if (aux->Proximo->Item.Chave == Item.Chave)
              RemovePosicao(Lista,aux);
           else
	         cout << "Elemento não encontrado.\n" << endl;
        }
   }
}
//---------------------------------------------
void Imprime (TLista Lista) {
    cout << "Itens na LISTA: " << endl;
    if (Vazia(Lista))
        cout << "Lista está vazia." << endl;
    else {
        Apontador aux;
        aux = Lista.Primeiro->Proximo;
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
	      cout << "Erro: A lista está cheia ou posição não inválida." << endl;
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
	      cout << "Erro: A lista está cheia" << endl;
	  else {
		  Lista.Item[Lista.Ultimo] = Item;
		  Lista.Ultimo++;
	  }
  }
//---------------------------------------------
  void RemoveInicio (TLista& Lista) {
	    if (Vazia(Lista))
	    	cout << "Erro : A lista está vazia.\n" << endl;
	    else {
	    	for (int aux = Lista.Primeiro; aux < Lista.Ultimo-1; aux++)
	    		Lista.Item[aux] = Lista.Item[aux+1];
	    	Lista.Ultimo--;
	    }
  }
//---------------------------------------------
  void RemovePosicao (TLista& Lista, int p) {
	    if ((Vazia(Lista)) || (p >= Lista.Ultimo)) {
	    	cout << "Erro : A lista está vazia ou posição inválida.\n" << endl;
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
	    	cout << "Erro : A lista está vazia.\n" << endl;
	    else {
	    	Lista.Ultimo--;
	    }
}
//---------------------------------------------
  void PesquisaRemove (TLista& Lista, int Item) {

	  if (Vazia(Lista))
          cout << "Erro : A lista está vazia.\n" << endl;
	  else {
		  int aux = Lista.Primeiro;
		  while ((Lista.Item[aux].Chave != Item) && (aux < Lista.Ultimo-2))
			 aux++;

		  if (Lista.Item[aux].Chave == Item) {
			  cout << "Elemento removido = " << Lista.Item[aux].Chave << endl;
			  RemovePosicao(Lista, aux);
		  }
		  else
			  cout << "Elemento não encontrado" << endl;
	  }
  }
*/


