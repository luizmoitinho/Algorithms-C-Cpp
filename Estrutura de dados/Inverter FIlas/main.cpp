#include <iostream>
#include <stdlib.h>

using namespace std;
#include "filas.h"
int main(){
    setlocale(LC_ALL,"portuguese");
    Tinfo item;  //usado para atribuir o valor e passar para a fun��o
    Tlista lista;//cria a lista
    cria(lista);
    int menuChoice,posicao;
    do{
        system("cls");
        Imprime(lista);
        cout<<"\t\tMenu\n"<<
        "\t[1] - Insere no in�cio\n"<<
        "\t[2] - Ordenar valores\n"<<
        "\tOp��o..: ";
        cin>>menuChoice;
        switch(menuChoice){
            case 1:
                setDados(item);
                insereIncio(lista,item);
                break;
            case 2:
                ordenar(lista);
                break;
            default:
                cout<<"opcao inv�lida!";
        }
    }while(menuChoice!=10);
}
