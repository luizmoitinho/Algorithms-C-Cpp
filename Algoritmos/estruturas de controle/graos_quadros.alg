algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 10/7/2017
// Se��o de Declara��es 
var
graos,total_graos,cont,quadro:inteiro
inicio
graos<-1
quadro<-1
total_graos<-1
 enquanto cont<=5 faca
    escreval("No ",quadro ,"� quadrado")
       quadro<-quadro+1
    escreval("Coloca-se:",graos," gr�o(s)")
       graos<-graos*2
    escreval("Somando ",total_graos," gr�o(s)")
       total_graos<-graos+total_graos
    escreval("")

    cont<-cont+1
 fimenquanto
 
fimalgoritmo
