algoritmo "MEDIA_VETORES"
// Função :
// Autor :
// Data : 10/8/2017
// Seção de Declarações 
var
md : vetor[1..4]de real
soma, media:real
i:inteiro
inicio
soma<-0
para i de 1 ate 4 passo 1 faca
     escreval("Digite a nota:")
     leia (md[i])
     soma<-soma+md[i]
fimpara
media<-soma/4
para i de 1 ate 4 passo 1 faca
escreval(md[1])
fimpara
escreval(media)

fimalgoritmo
