// LEI UMA TEMPERATURA EM CELSIUS E CONVETA-A EM FARENHEIT- F=C(9/5)+32.0
#include<conio.h>
#include <stdio.h>
#include<math.h>
int main(void){
int CELSIUS;
clrscr();
	printf("DIGITE A TEMPERATURA EM CELSIUS: ");
	scanf("%f", &CELSIUS);
	printf("%f C = %f  F " ,CELSIUS,(CELSIUS*(9/5))+32);
getch();
return 0;
}