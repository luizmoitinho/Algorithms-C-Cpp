// crie um programa que teste uma senha dada


#include<conio.h>
#include<stdio.h>
int main(void){
int senha,verifica=0;
clrscr();
printf("--- TESTANDO SENHA ---\n");
printf("Informe uma senha com apenas numeros !!\n");
printf("Digite sua senha : ");
scanf("%d",&senha);
printf("Comfirme sua senha: ");
scanf("%d",&verifica);
	if(senha == verifica){
	   printf("SENHA CRIADO COM SUCESSO!!");
	}
	else{
	   printf("ERRO, AS SENHAS SAO DIFERENTES ! ");
	}
getch();
return 0;
}