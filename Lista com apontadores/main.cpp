#include <iostream>
#include <locale.h>
#include <fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;



#include "Apontadores.h"

enum Escolhas {CRIA, PROCURAR, INSEREINICIO, INSEREPOSICAO, INSEREFINAL, REMOVEINICIO,
REMOVEFINAL, PESQUISAREMOVE,IMPRIME, FIM};

Escolhas enterChoice (Tlista &lista){

    system("cls");
    int menuChoice;
    cout<<"\n\t\t\t\tMENU\n\n"
    <<"\t\t\t[1] Procurar acidente\n"
    <<"\t\t\t[2] Insere no inicio\n"
    <<"\t\t\t[3] Insere na posicao\n"
    <<"\t\t\t[4] Insere no final\n"
    <<"\t\t\t[5] Remove no inicio\n"
    <<"\t\t\t[6] Remove no final\n"
    <<"\t\t\t[7] Pesquisa e remove\n"
    <<"\t\t\t[8] Imprime\n"
    <<"\t\t\t[9] Fim do programa\n"
    << "\t\t\t\t>>Opção : ";
    cin>>menuChoice;
    return (Escolhas) menuChoice;
}

int main(){
    setlocale(LC_ALL, "portuguese");

    Tinfo item; // item a ser enviado para as funções
    Tlista lista; // lista em sí
    criaLista(lista);
    int posicao=0; //posição para inserir um item
    Escolhas opcao;
    carregaArquivo(lista); // carregando
    while((opcao = enterChoice(lista)) !=FIM){
       switch(opcao){
            case PROCURAR:
               cout<<"\n\t\t Informe o código do acidente : ";
                cin>>item.codigo;
                procurarAcidente(lista,item);
               break;
            case INSEREINICIO:
                setDados(lista,item);
                insereInicio(lista,item);
                break;
            case INSEREPOSICAO:

                setDados(lista,item);
                setPosicao(posicao);
                inserePosicao(lista,item,posicao);
                break;
            case INSEREFINAL:
               setDados(lista,item);
                insereFinal(lista,item);
                break;
            case REMOVEINICIO:
                removeInicio(lista);
                break;
            case REMOVEFINAL:
                removeFinal(lista);
                break;
            case PESQUISAREMOVE:
                cout<<"\n\t\t Informe o código do acidente : ";
               cin>>item.codigo;
               pesquisaRemove(lista,item);
                break;
            case IMPRIME:
                  imprime(lista);
                break;
            default:
                cerr<<" \n\t\tOpção digitada é inválida!!\n";
                break;
       }
       system("pause");
    }
        atualizaArquivo(lista);
    return 0;
}
