algoritmo "NUMERO_DIVISIVEL"
// Fun��o :
// Autor :
// Data : 10/6/2017
// Se��o de Declara��es
var
dividendo,resultado:inteiro
resto1,resto2,resultado1,resultado2:real
inicio
escreval("Digite o valor que ser� dividido:")
leia(dividendo)

resto1 <- dividendo mod 5
resto2 <- dividendo mod 4

se ((resto1=0) e (resto2=0)) entao
   escreval("O valor � divis�vel por 5 e 4 :")
   escreval(" ")
   resultado1 <- dividendo div 5
   escreval(dividendo,"/ 5 = ", resultado1)
   escreval(" ")
   resultado2 <- dividendo div 4
   escreval(dividendo,"/ 4 = ", resultado2)
senao
    escreval("O valor n�o � divis�vel por 5 e 4 :")
fimse
fimalgoritmo
