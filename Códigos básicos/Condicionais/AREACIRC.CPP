// calcular a area de um circulo de raio r, testando se o valor do raio
// ‚ menor que zero
#include <stdio.h>
#include<conio.h>
int main(void){
float  r,area=0;
float pi=3.14159;
clrscr();
printf("CALCULO DA AREA DO CIRCULO \n");
printf("Informe o raio do circulo: ");
scanf("%f",&r);
 if(r>=0){
   area=2*pi*r;
   printf("o valor aproximada da area : %6.3f",area);
  }
  else{
  printf("o raio e menor que zero!");
  }
getch();
return 0;
}