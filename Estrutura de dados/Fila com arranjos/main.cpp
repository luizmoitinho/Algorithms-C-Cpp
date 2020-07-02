#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
#include "FILA_ARRANJO.h"
enum Escolhas {CRIA, ENFILEIRA, DESENFILEIRA, IMPRIME, FIM};

//------------------------------------------------------------------------
Escolhas enterChoice(TFila& fila)
{
    system("cls");
    Print(fila);
    int menuChoice;
    cout << "\nMenu: [FILA CIRCULAR - ARRANJO]" << endl
         << "1 - Enfileira\n"
         << "2 - Desenfileira\n"
         << "3 - Imprime\n"
         << "4 - Fim do programa\n"
         << "Op��o: ";
    cin >> menuChoice;
    return (Escolhas) menuChoice;
}

void setDados(TInfo& item){
    cout << "\nInforme o C�digo: ";
    cin >> item.Chave;
}

int main()
{
    setlocale (LC_ALL,"portuguese");
    TInfo item;
    TFila f;
    QInit(f);
    Print(f);

    Escolhas opcao;
    while ((opcao = enterChoice(f)) != FIM)
    {
        switch (opcao)
        {
        case ENFILEIRA:
            setDados(item);
            enQueue(f,item);
            break;
        case DESENFILEIRA:
            deQueue(f);
            break;
        case IMPRIME:
            Print(f);
            break;
        default:
            cerr << "Op��o incorreta\n";
            break;
        }
    }
    return 0;
}
