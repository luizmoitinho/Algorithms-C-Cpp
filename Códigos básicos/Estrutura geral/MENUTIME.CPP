/*
Criar um codigo que apresente um menu
para escolha de um time de futebol
 */
#include<conio.h>
#include <stdio.h>
int main(void){
clrscr();
int indice;
printf("----MENU DE TIMES------ \n");
printf("--Escolha seu time!!--\n");
printf("[1]-Flamengo\n");
printf("[2]-Corinthians\n");
printf("[3]-Bahia\n");
scanf("%d",&indice);
  if (indice==1){
  printf("\n SEU TIME E O FLAMENGO!!");
  }
  else{
     if(indice==2){
     printf("\n SEU TIME E O CORINTHIANS!!");
     }
     else{
       if(indice==3){
       printf("\n SEU TIME E O BAHIA");
       }
       else{
       printf("\n VALOR INVALIDO!");
       }
     }
  }


getch();
return 0;
}