/*RESOLVA O PROBLEMA: Uma copia de xerox custa R$ 0,25 por folha,
mas acima de 100 folhas esse valor cai para R$0,20 por unidade.Dado o total
de copias, informe o valor a ser pago
*/
#include<conio.h>
#include <stdio.h>
#include<stdlib.h>
int main(void){
int numCopias=0;
float preco=0;
    printf("------X E R O X------ \n");
    printf("Quantas copias deseja ? ");
    scanf("%d",&numCopias);
       if(numCopias < 100){
          preco =numCopias*0.25;
          printf("O valor a ser cobrado : %5.2f",preco);
        }
        else{
          preco=numCopias*0.20;
          printf("O valor a ser cobrado : %5.2f", preco);
        }
    printf("\n ----------------------");
    getch();
    return 0;

}
