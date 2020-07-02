//----LISTA IMPREMENTADA POR MEIO DE ARRANJO----
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
} TLista;

//---------------------------------------------
void Cria (TLista& Lista) {
    Lista.Primeiro = 0;
    Lista.Ultimo = Lista.Primeiro;
}
//---------------------------------------------
bool Vazia (TLista Lista) {
     return Lista.Primeiro==Lista.Ultimo?true:false;
}
//---------------------------------------------
bool Cheia (TLista Lista) {
	  return Lista.Ultimo >= Tmax?true:false;
}
//---------------------------------------------
void InsereInicio (TLista& Lista, TInfo Item) {
	  if (Cheia(Lista))
	      cout << "Erro: A lista est� cheia" << endl;
	  else
	  {
		  for (int aux=Lista.Ultimo; aux>=Lista.Primeiro+1 ; aux--)
			  Lista.Item[aux] = Lista.Item[aux-1];

		  Lista.Item[Lista.Primeiro] = Item;
		  Lista.Ultimo++;
	  }
}
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
void ordena(TLista &l){
    TInfo aux;
    for(int i=l.Primeiro;i<l.Ultimo-1;i++){
        for(int j=i+1;j<l.Ultimo;j++){
                if(l.Item[i].Chave> l.Item[j].Chave){
                    aux = l.Item[i];
                    l.Item[i] = l.Item[j];
                    l.Item[j] = aux;
                }
        }
    }

}

void inverter (TLista & l){
    TInfo aux;
    for(int i=l.Primeiro, j=l.Ultimo-1; i<j; i++,j--){
        aux = l.Item[i];
        l.Item[i] = l.Item[j];
        l.Item[j] = aux;
    }
}
void PesquisaRemove (TLista& Lista, int Item) {

	  if (Vazia(Lista))
          cout << "Erro : A lista est� vazia.\n" << endl;
	  else {
            int i;
            bool status;
            for(i = 0; i <Lista.Ultimo;i++){
                if(Lista.Item[i].Chave== Item){
                    for(int j=i;j<Lista.Ultimo;j++)
                        Lista.Item[i] = Lista.Item[i+1];
                    Lista.Ultimo--;
                    status =true;
                    break;

                }
            cout<<i<<endl;
            }
            if(!status){
              cout<<"\nItem n�o encontrado\n";
            }
		  /*int aux = Lista.Primeiro;
		  while ((Lista.Item[aux].Chave != Item) && (aux < Lista.Ultimo-1))
			 aux++;

		  if (Lista.Item[aux].Chave == Item) {
			  cout << "Elemento removido = " << Lista.Item[aux].Chave << endl;
			  RemovePosicao(Lista, aux);
		  }
		  else
			  cout << "Elemento n�o encontrado" << endl;*/
	  }
	   system("pause");
  }
//---------------------------------------------
 void Imprime (TLista Lista) {
      cout << "Itens na LISTA: " << endl;
	  if (Vazia(Lista))
          cout << "Lista est� vazia." << endl;
	  else {
        for (int aux = Lista.Primeiro; aux < Lista.Ultimo; aux++)
            cout << Lista.Item[aux].Chave << " " ;
        cout << endl;
	  }
      cout << "\nPRIMEIRO = " << Lista.Primeiro << endl;
      cout << "ULTIMO = " << Lista.Ultimo << endl;
      cout << "TMAX = " << Tmax << endl;
  }
//---------------------------------------------
