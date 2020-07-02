#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
#include "PILHA_APONTADOR.h"
enum Escolhas {CRIA, EMPILHA, DESEMPILHA, TOPO, IMPRIME, FIM};

//------------------------------------------------------------------------
Escolhas enterChoice(TPilha& pilha)
{
    system("cls");
    Imprime(pilha);
    int menuChoice;
    cout << "\nMenu [PILHA - APONTADOR]" << endl
         << "1 - Empilha\n"
         << "2 - Desempilha\n"
         << "3 - Topo\n"
         << "4 - Imprime\n"
         << "5 - Fim do programa\n"
         << "Opção: ";
    cin >> menuChoice;
    return (Escolhas) menuChoice;
}

void setDados(TInfo& item){
    cout << "\nInforme o Código: ";
    cin >> item.Chave;
}

int main()
{
    setlocale (LC_ALL,"portuguese");
    TInfo item;
    TPilha p;
    Cria(p);
    Imprime(p);

    Escolhas opcao;
    while ((opcao = enterChoice(p)) != FIM)
    {
        switch (opcao)
        {
        case EMPILHA:
            setDados(item);
            Empilha(p,item);
            break;
        case DESEMPILHA:
            Desempilha(p);
            break;
        case TOPO:
            cout << "\nTOPO: " << Topo(p).Chave;
            break;
        case IMPRIME:
            Imprime(p);
            break;
        default:
            cerr << "Opção incorreta\n";
            break;
        }
    }
    return 0;
}
