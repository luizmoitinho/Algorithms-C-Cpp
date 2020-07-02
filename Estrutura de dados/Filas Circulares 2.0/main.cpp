#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

#include "Metodos.h"

int main(){
    setlocale(LC_ALL,"portuguese");
    int op;
    Tinfo item;
    Tfila fila;
    criaFila(fila);

    do{
        system("cls");
        imprime(fila);
        cout<<"\n\t\t\tMENU\n\n";
        cout<<"\n\t\t[1] - inserir na fila\n";
        cout<<"\n\t\t[2] - remover na fila\n";
        cout<<"\n\t\t[3] - Inserir no inicio\n\n";
        cout<<"\n\t\t[4] - sair\n";
        cout<<"\n\t\t #Informe a opção : ";
        cin>>op;
        switch(op){
            case 1:
                if(isFull(fila)){
                    cout<<"\n\t\tA fila está cheia!!\n";
                    system("pause");
                }
                else{
                    setItem(item);
                    Enqueue(fila,item);
                }
                break;
            case 2:
                if(isEmpty(fila)){
                    cout<<"\n\t\tA fila está vazia!!\n";
                    system("pause");
                }
                else
                    Dequeue(fila);
                break;
            case 3:
                setItem(item);
                FuraFila(fila,item);
                break;
            default:
                cout<<"\n\t\tA opção digitada é inválida!!\n";
                system("pause");
        }

    }while(op!=4);
    cout<<"\n\t\tAlerta : Programa finalizado!!\n";
}
