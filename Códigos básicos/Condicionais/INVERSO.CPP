// ler trˆs numeros do teclado e imprimir na ordem inversa
#include<stdio.h>
#include<conio.h>
int main(void){
clrscr();
int n1,n2,n3 =0;
printf("IMPRIMINDO VALORES NA ORDEM INVERSA \n");
printf("digite o primeiro valor:");
scanf("%d",&n1);
printf("digite o segundo valor: ");
scanf("%d", &n2);
printf("digite o terceiro valor :");
scanf("%d", &n3);
printf("%d %d %d ", n3,n2,n1);
getch ();
return 0;
}