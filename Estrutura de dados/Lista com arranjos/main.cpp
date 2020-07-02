#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
#include "LISTA_ARRANHO.h"
enum Escolhas {CRIA, INSEREINICIO, INSEREPOSICAO, INSEREFINAL, REMOVEINICIO, REMOVEFINAL, PESQUISAREMOVE, IMPRIME, FIM,ORDENA,INVERTE};

//------------------------------------------------------------------------
Escolhas enterChoice(TLista& lista)
{
    system("cls");
    Imprime(lista);
    int menuChoice;
    cout << "\nMenu [LISTA ARRANJO]" << endl
         << "1 - Insere no In�cio\n"
         << "2 - Insere na Posi��o\n"
         << "3 - Insere no Final\n"
         << "4 - Remove do In�cio\n"
         << "5 - Remove do Final\n"
         << "6 - Pesquisa e Remove\n"
         << "7 - Imprime\n"
         << "8 - Fim do programa\n"
         << "9 - Ordena\n"
         << "10 - inverters\n"
         << "Op��o: ";
    cin >> menuChoice;
    return (Escolhas) menuChoice;
}

void setDados(TInfo& item){
    cout << "\nInforme o C�digo: ";
    cin >> item.Chave;
}

void setPosicao(int& pos){
    cout << "\nInforme a Posi��o: ";
    cin >> pos;
}

int main()
{
    setlocale (LC_ALL,"portuguese");
    TInfo item;
    int p;
    TLista l;
    Cria(l);
    Imprime(l);

    Escolhas opcao;
    while ((opcao = enterChoice(l)) != FIM)
    {
        switch (opcao)
        {
        case INSEREINICIO:
            setDados(item);
            InsereInicio(l,item);
            break;
        case INSEREPOSICAO:
            setDados(item);
            setPosicao(p);
            InserePosicao(l,p,item);
            break;
        case INSEREFINAL:
            setDados(item);
            InsereFinal(l,item);
            break;
        case REMOVEINICIO:
            RemoveInicio(l);
            break;
        case REMOVEFINAL:
            RemoveFinal(l);
            break;
        case PESQUISAREMOVE:
            setDados(item);
            PesquisaRemove(l,item.Chave);
            break;
        case IMPRIME:
            Imprime(l);
            break;
        case ORDENA:
            ordena(l);
            break;
        case INVERTE:
            inverter(l);
        break;
        default:
            cerr << "Op��o incorreta\n";
            break;
        }
    }
    return 0;
}
