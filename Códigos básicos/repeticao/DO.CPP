#include<conio.h>
#include <stdio.h>
#include<stdlib.h>
int main(void){
clrscr();
int cont =0,armazena=0,x=0;
char acesso;
do{
	printf("DIGITE UM VALOR:\n");
	scanf("%d",&x);
	fflush(stdin);
	armazena+=x;
	cont++;
	printf("deseja sair? [s/n]: ") ;
	scanf("%c",&acesso);
}
while(acesso=='s');
printf("o numero de repeticoes : %d \n", cont);
printf("a soma dos numeros inseridos : %d",armazena);
getch();
return 0;
}