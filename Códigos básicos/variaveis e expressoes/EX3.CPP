// pe‡a ao usurario para digiar 3 valores inteiro e mostre a soma
#include<conio.h>
#include <stdio.h>
int main(void){
int n1,n2,n3;
clrscr();
	printf("insira o primeiro numero : ");
	scanf("%d", &n1);
	printf("insira o segundo numero : ");
	scanf("%d",&n2);
	printf("insira o terceiro numero: ");
	scanf("%d",&n3);
	printf("%d + %d + %d = %d ",n1,n2,n3, n1+n2+n3);
getch();
return 0;
}