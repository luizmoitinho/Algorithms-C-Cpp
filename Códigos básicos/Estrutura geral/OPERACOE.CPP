/*
RECEBER DOIS NUMEROS E EFETUAR A:
SOMA,SUBTRA€AO E DIVISAO
*/
#include <stdio.h>
#include<math.h>
#include <conio.h>
int main(void){
float a,b,soma,subtracao,mult,div;
clrscr();
printf("---DIGITE DOIS VALORES--\n");
printf("\n Digite o primeiro valor:");
scanf("%f",&a);
printf("\n Digite o segundo valor :");
scanf("%f",&b);
soma= a+b;
subtracao=a-b;
mult=a*b;
div=a/b;
printf("\n A soma : %5.2f", soma);
printf("\n A subtracao : %5.2f",subtracao);
printf("\n A multiplicacao : %5.2f",mult);
printf("\n A divisao: %5.2f", div);
getch();
return 0;
}