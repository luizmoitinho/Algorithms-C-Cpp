/*Escreva um algoritmo que informe a categoria de um jogador de
futebol, considerando sua idade:
>infantil: ate 13 anos
>juvenil:ate 17 anos
>senior: acima de 17 anos
*/
#include <stdio.h>
#include<conio.h>
int main(void){
int idade=0;
clrscr();
printf("- - CATEGORIA DOS JOGADORES - - \n");
printf("Informe a sua idade : ");
scanf("%d",&idade);
    if(idade<=13){
	printf("A sua categoria : INFANTIL");
    }
    else{
	if( (idade>13) && (idade<=17) ){
	    printf("A sua categoria : JUVENIL");
	}
	else{
	    printf("A sua categoria : SENIOR");
	}
    }
getch();
return 0;
}