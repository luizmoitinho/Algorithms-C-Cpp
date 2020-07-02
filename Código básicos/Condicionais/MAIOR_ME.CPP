//Escreva um algoritmo que diga qual ‚ o maior numero
#include<conio.h>
#include<stdio.h>
int main(void){
float x,y =0;
clrscr();
printf("<<<  QUAL VALOR E MAIOR >>>\n");
printf("Informe o primeiro valor: ");
scanf("%f", &x);
printf("Informe o segundo valor :");
scanf("%f", &y);
	if(x>y){
	  printf("%5.2f > %5.2f",x,y);
	}
	else{
	    if(x<y){
	       printf("%5.2f < %5.2f ",x,y);
	    }
	    else{
		printf("%5.2f = %5.2f ", x,y);
	    }
	}
getch();
return 0;
}
