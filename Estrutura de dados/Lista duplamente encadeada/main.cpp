#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;



#include "Apontadores.h"

enum Escolhas {CRIA,INSEREINICIO, INSEREPOSICAO, INSEREFINAL, REMOVEINICIO,
REMOVEFINAL, PESQUISAREMOVE,IMPRIME, FIM};

Escolhas enterChoice (Tlista &lista){

    system("cls");
    int menuChoice;
    cout<<"\n\t\t\t\tMENU\n\n"
    <<"\t\t\t[1] Insere no inicio\n"
    <<"\t\t\t[2] Insere na posicao\n"
    <<"\t\t\t[3] Insere no final\n"
    <<"\t\t\t[4] Remove no inicio\n"
    <<"\t\t\t[5] Remove no final\n"
    <<"\t\t\t[6] Pesquisa e remove\n"
    <<"\t\t\t[7] Imprime\n"
    <<"\t\t\t[8] Fim do programa\n"
    << "\t\t\t\t>>Opção : ";
    cin>>menuChoice;
    return (Escolhas) menuChoice;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    Tinfo item;
    Tlista lista;
    int posicao=0;
    cria(lista);
    Escolhas opcao;

    while((opcao = enterChoice(lista)) !=FIM){

       switch(opcao){
            case INSEREINICIO:
                cout<<"\n\t\tInforme o código do item a ser inserido :";
                setDados(item);
                insereInicio(lista,item);
                break;
            case INSEREPOSICAO:
                cout<<"\n\t\tInforme o código do item a ser inserido :";
                setDados(item);
                cout<<"\n\t\tInforme a posição que item ficará :";
                setPosicao(posicao);
                inserePosicao(lista,item,posicao);
                break;
            case INSEREFINAL:
               cout<<"\n\t\tInforme o código do item a ser inserido :";
               setDados(item);
               insereFinal(lista,item);
                break;
            case REMOVEINICIO:
                if(vazia(lista))
                    cerr<<"\n\t\t A lista está vazia, impossível remover\n";
                else
                    removeInicio(lista);
                break;
            case REMOVEFINAL:
                if(vazia(lista))
                    cerr<<"\n\t\t A lista está vazia, impossível remover\n";
                else
                    removeFinal(lista);
                break;

            case PESQUISAREMOVE:
                if(vazia(lista))
                    cerr<<"\n\t\t A lista está vazia, impossível remover\n";
                else{
                    cout<<"\n\t\t Informe o código do item ser removido: ";
                    setDados(item);
                    pesquisaRemove(lista,item);
                }
                break;
            case IMPRIME:
                  if(vazia(lista))
                    cerr<<"\n\t\tA lista não pode ser impressa,está vazia!\n";
                  else
                    imprime(lista);
                break;
            default:
                cerr<<" \n\t\tOpção digitada é inválida!!\n";
                break;
       }
       cout<<endl;
       system("pause");
    }
    return 0;
}
