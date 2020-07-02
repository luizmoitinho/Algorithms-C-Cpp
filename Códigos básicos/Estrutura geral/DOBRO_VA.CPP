/*
  criar um codigo que leia um valor e exiba seu dobro
*/
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void){
float x;
clrscr();
printf("Digite um valor: ");
scanf("%f",&x);
printf("O dobro do valor : %5.2f ",2*x);
getch();
return 0;
}