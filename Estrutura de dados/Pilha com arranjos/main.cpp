#include <iostream>
#include<stdlib.h>
#include <locale.h>
#include <stdio.h>
using namespace std;
#include "PilhaArranjo.h"

enum Escolhas {CRIA,INSERE,REMOVE,VER_TOPO,IMPRIME, FIM};

Escolhas enterChoice (Tpilha &pilha){
    system("cls");
    int menuChoice;
    cout<<"\n\tPilha.Topo : "<<pilha.Topo<<endl;
    cout<<"\n\t\t\t\tMENU\n\n"
    <<"\t\t\t[1] Insere na pilha\n"
    <<"\t\t\t[2] Remove da pilha\n"
    <<"\t\t\t[3] Visualizar topo\n"
    <<"\t\t\t[4] Imprime\n"
    <<"\t\t\t[5] Fim do programa\n"
    << "\t\t\t\t>>Opção : ";
    cin>>menuChoice;
    return (Escolhas) menuChoice;
}

int main(){
    setlocale(LC_ALL,"portuguese");
    Tinfo item;
    Tpilha pilha;
    criaPilha(pilha);
    Escolhas opcao;
    while((opcao =  enterChoice(pilha))!= FIM ){
       switch(opcao){

           case INSERE:
                if(cheia(pilha))
                    cerr<<"\n\t\tA pilha está cheia, impossível inserir outro item!\n";
                 else{
                    setDados(item);
                    empilha(pilha,item);
                 }
               break;
           case REMOVE:
                if(vazia(pilha))
                    cerr<<"\n\t\tA pilha está vazia, impossível remover um item!\n";
                 else
                  desempilha(pilha);
                break;
            case VER_TOPO:
                if(vazia(pilha))
                    cerr<<"\n\t\tA pilha está vazia, impossível remover um item!\n";
                else
                     printf("\n\t\tItem no topo da pilha %d", topo(pilha));
               break;
            case IMPRIME:
                if(vazia(pilha))
                    cerr<<"\n\t\tA pilha está vazia, impossível remover um item!\n";
                else
                    imprime(pilha);
               break;
            case FIM:
                cout<<"Você saiu do programa!!";
               break;
       }
       cout<<endl;
       system("pause");
    }


}
