algoritmo "semnome"
// Função :
// Autor :
// Data : 10/8/2017
// Seção de Declarações 
var
a,b: vetor[1..5] de real
i,r: inteiro

inicio
 para i de 1 ate 5 passo 1 faca
   escreva("Digite um valor inteiro: ")
   leia(a[i])
 fimpara
 para i de 1 ate 5 passo 1 faca
   r<- i%2
   se r=0 entao
      b[i]<-a[i] +5
      senao
         b[i]<-a[i]*5
  fimse
 fimpara
  para i de 1 ate 5 passo 1 faca
    escreval(b[i])
 fimpara


fimalgoritmo
