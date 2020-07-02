algoritmo "apresentar_o_quadrado_das_matrizes"
// Função :
// Autor :
// Data : 10/8/2017
// Seção de Declarações 
var
a,b: vetor[0..4] de real
i,fat,cont:inteiro
inicio
fat<-1
cont<-1
      escreval("Digite 4 valores para o grupo 'A' ")
           para i de 0 ate 4 passo 1 faca
           leia(a[i])
      fimpara
      escreval("Grupo ' A²' ")
      para i de 0 ate 4 passo 1 faca
           enquanto cont<=b[i] faca
             b[i]<-a[i]
             fat<-fat*cont
             escreval(fat=b[i])
             cont<-cont+1
           fimenquanto
     escreval(b[i])
     fimpara

      
fimalgoritmo
