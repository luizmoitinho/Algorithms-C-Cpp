algoritmo "CALCULO_BASKARA"
// Função :
// Autor :
// Data : 10/6/2017
// Seção de Declarações 
var
a,b,c,delta:real
inicio
escreva("Formula b²-4.a.c")
escreval("")
escreva("Digite o valor de a: ")
leia(a)
escreva("Digite o valoor de b: ")
leia (b)
escreva("Digite o valor de c: ")
leia (c)
se ((a=0) e (b=0) e (c=0)) entao
   escreval("")
   escreva("Delta = ",b"² - 4.",a,".",c)
   escreval("")
   escreva("Delta = "expo(b,2) "- 4.",a*c)
   escreval("")
   escreva("Delta = "expo(b,2)- (4*a*c))
   escreva("É uma equação incompleta !!")

   senao
    escreval("")
    escreva("Delta = ",b,"² - 4.",a,".",c)
    escreval("")
    escreva("Delta = ",exp(b,2),"- 4.",a*c)
    escreval("")
    escreva("Delta = ",exp(b,2) - (4*a*c))
    escreval("")
    escreva("É uma equação completa !!")
fimse

fimalgoritmo
