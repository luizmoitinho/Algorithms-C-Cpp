algoritmo "SOMATORIOS_FATORIAL"
// Função :
// Autor :
// Data : 10/7/2017
// Seção de Declarações 
var
total:inteiro
fatorial,fatorial1,fatorial2,fatorial3:inteiro
cont,cont1,cont2,cont3:inteiro
res,res1,res2,res3:inteiro
inicio
escreval("Digite um valor inteiro : ")
leia (fatorial)
//respostas dos fatoriais
res<-1
res1<-1
res2<-1
res3<-1
//contadores
cont<-1
cont1<-1
cont2<-1
cont3<-1


enquanto cont<=fatorial faca
  res<-res*cont
  cont<-cont+1
  escreval(res)

    se cont>fatorial entao
      escreval("Digite um valor inteiro : ")
      leia (fatorial1)
      enquanto cont1<=fatorial1 faca
         res1<-res1*cont1
         cont1<-cont1+1
         escreval(res1)
         se cont1>fatorial1 entao
           escreval("Digite um valor inteiro : ")
           leia (fatorial2)
           enquanto cont2<=fatorial2 faca
            res2<-res2*cont2
            cont2<-cont2+1
            escreval(res2)
            se cont2>fatorial2 entao
              escreval("Digite um valor  : ")
              leia (fatorial3)
              enquanto cont3<=fatorial3 faca
                res3<-res3*cont3
                cont3<-cont3+1
                escreval(res3)
             fimenquanto
           fimse
          fimenquanto
        fimse
     fimenquanto
       escreval("")
       total<-res+res1+res2+res3
       escreval("A soma dos fatoriais: ",res,"+",res1,"+",res2,"+",res3,"=",total)
    fimse
fimenquanto
         



fimalgoritmo
