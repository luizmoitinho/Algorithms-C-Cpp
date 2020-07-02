// CALCULAR A RAIZES QUADRADAS : ax^2 + bx + c
#include <stdio.h>
#include<conio.h>
#include<math.h>
int main(void){
float a,b,c,delta,x1,x2=0;
clrscr();
printf("EQUACAO DO SEGUNDO GRAU \n");
printf("Digite o valor de 'a' : ");
scanf("%f",&a);
printf("Digite o valor de 'b': ");
scanf("%f",&b);
printf("Digite o valor 'c' : ");
scanf("%f",&c);
delta =pow(b,2) -(4*a*c);
	if(delta<0){
	printf("\n delta nao pode ser negativo- delta = %2.f",delta);
	}
	else{
	delta=pow(b,2)-(4*a*c);
	printf("%2.f^2 - 4* %.2f * %.2f \n",b,a,c);
	printf("delta = %2f \n",delta);
	printf("-------------------------");
	x1=((-b)+sqrt(delta))/(2*a);
	printf("\n x1 = %5.2f",x1);
	x2  =((-b)-sqrt(delta)/(2*a));
	printf("\n x2 = %5.2f",x2);
	}
getch();
return 0;
}