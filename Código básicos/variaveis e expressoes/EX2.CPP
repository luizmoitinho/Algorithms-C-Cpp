// fa‡a um programa que leia um numero real e o imprima !
#include<conio.h>
#include <stdio.h>
int main(void){
float numero=0;
clrscr();
printf("insira um numero : ");
scanf("%f", &numero);
printf("voce digitou o numero :  %5.2f", numero);
getch();
return 0;
}