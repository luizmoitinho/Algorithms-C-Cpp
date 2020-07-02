// ULTILZANDO SWITCH
#include <stdio.h>
#include<conio.h>
int main(void){
int var=0;
clrscr();
printf("-----M E N U ----- \n");
printf("1)PARA DOAR 10 REAIS \n");
printf("2) PARA DOAR 20 REAIS \n");
scanf("%d",&var);
switch(var){
	case 1:
	    printf("VOCE DOOU 10 REAIS");
	    break;
       case 2:
	    printf("VOCE DOOU 20 REAIS");
	    break;
      default:
	    printf("NAO FEZ NENHUMA DOACAO");

}
getch();
return 0;
}