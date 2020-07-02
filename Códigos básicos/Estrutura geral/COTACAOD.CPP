/*
 Dado um valor em reais e a cotacao do dolar, converter esse valor
 para dolar
*/
#include<conio.h>
#include<stdlib.h>
#include <stdio.h>
int main(void){
float reais,cotacao,dolar;
clrscr();
printf("Digite a quantia em R$ ");
scanf("%f",&reais);
printf("Digite a cotacao do dolar :R$ ");
scanf("%f",&cotacao);
dolar=reais*cotacao;
printf("%5.2f reais = %5.2f dolares", reais, dolar);
getch();
return 0;
}