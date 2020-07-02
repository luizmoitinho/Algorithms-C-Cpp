#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include "PilhaApontadores06.h"
int main(){
    setlocale(LC_ALL,"portuguese");
    int menuChoice;
    Tpilha pilha;
    Tinfo item;
    cria(pilha);

    do{
        system("cls");
        cout<<"\n\t\t\t\tMENU\n\n"
        <<"\t\t\t[1] Insere na pilha\n"
        <<"\t\t\t[2] Remove da pilha\n"
        <<"\t\t\t[3] Visualizar topo\n"
        <<"\t\t\t[4] Imprime\n"
        <<"\t\t\t[5] Fim do programa\n"
        << "\t\t\t\t>>Opção : ";
        cin>>menuChoice;
        switch(menuChoice){
           case 1:
                setDados(item);
                empilha(pilha,item);
               break;
           case 2:
                if(vazia(pilha))
                    cerr<<"\n\t\tA pilha está vazia, impossível remover um item!\n";
                 else
                  desempilha(pilha);
                break;
            case 3:
                if(vazia(pilha))
                    cerr<<"\n\t\tA pilha está vazia, impossível remover um item!\n";
                else
                    printf("\n\t\tItem no topo da pilha %d", topo(pilha));
               break;
            case 4:
                if(vazia(pilha))
                    cerr<<"\n\t\tA pilha está vazia, impossível remover um item!\n";
                else
                    imprime(pilha);
               break;
            case 5:
                cout<<"Você saiu do programa!!";
               break;
       }
       cout<<endl;
       system("pause");
    }while(menuChoice != 5);

}
