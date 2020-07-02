algoritmo "ATRASO_PRESTACAO"
// Função :
// Autor :
// Data : 10/5/2017
// Seção de Declarações 
var
   taxa,valor, prestacao:real

inicio
 escreval("Digite o valor da prestação R$")
 leia(valor)
 escreval("Digite a taxa a ser cobrada R$")
 leia(taxa)
 prestacao<-valor + valor*(taxa/100)
 escreval("O valor sem a taxa R$:",valor)
 escreval("O valor com a taxa de atraso:",prestacao)
fimalgoritmo

