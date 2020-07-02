// calcular a media aritm‚tica de 3 valores
#include <stdio.h>
#include<conio.h>
int main(void){
float num1,num2,num3,media=0;
clrscr();
printf("MEDIA ARITMETICA \n");
printf("digite o primeiro valor: ");
scanf("%f",&num1);
printf("digite o segundo valor: ");
scanf("%f",&num2);
printf("digite o terceiro valor: ");
scanf("%f",&num3);
media=(num1+num2+num3)/3;
printf("A MEDIA DOS TRES VALORES : %5.2f",media);
getch();
return 0;
}
