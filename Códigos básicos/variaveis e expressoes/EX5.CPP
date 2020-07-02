// lei aum numero real e imprima o resultado do quadrado desse numero
#include<conio.h>
#include <stdio.h>
#include<math.h>
int main(void){
float numero;
clrscr();
	printf("insira o primeiro numero : ");
	scanf("%f", &numero);
	printf("%5.2f / 5  = %5.2f" ,numero,numero/5);
getch();
return 0;
}