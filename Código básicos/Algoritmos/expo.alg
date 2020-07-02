algoritmo "semnome"
// Função :
// Autor :
// Data : 10/5/2017
// Seção de Declarações 
var
 base, expo, cont, res:inteiro
inicio
 escreval("Digite o valor da base:")
 leia(base)
 escreval("Digite o valor da exponenciação:")
 leia(expo)
 res<-1
   enquanto cont<expo FACA
     res<-res*cont
     cont<-cont+1
   fimenquanto
 escreval(base,"^",expo," = ", res)
fimalgoritmo
