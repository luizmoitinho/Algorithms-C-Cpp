/*
Informar a area de uma sala
 */

#include<stdio.h>
#include<conio.h>
int main(void){
float comprimento,largura,area;
clrscr();
printf("Insira o comprimento da sala : ");
scanf("%f", &comprimento);
printf("Insira a largura da sala: ");
scanf("%f", &largura);
area=largura*comprimento;
printf("\n A area da sala :%5.2f", area);
getch();
return 0;
}