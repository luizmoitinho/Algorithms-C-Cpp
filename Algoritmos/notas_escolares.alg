algoritmo "MEDIA_ESCOLAR"
// Fun��o :
// Autor :
// Data : 10/6/2017
// Se��o de Declara��es 
var
nota1,nota2,nota3,nota4,media,exame:real

inicio
escreva("Digite a primeira nota :")
leia (nota1)
escreva("Digite a segunda nota :")
leia (nota2)
escreva("Digite a terceira nota :")
leia (nota3)
escreva("Digite a quarta nota :")
leia (nota4)
escreval("")
media<-(nota1+nota2+nota3+nota4)/4
 se(media>=7)entao
   escreva("O aluno est� aprovado!")
   escreval("")
   escreval("")
   escreva("Nota obtida :",media)

   senao
    escreval("O aluno ficou de recupera��o:")
    escreval(" ")
    escreval("Por favor, digite a nota de exame :")
    leia (exame)
    escreval("")
    media<- (exame+media)/2
    se (media>=5)entao
     escreva("O aluno est� aprovado!")
     escreval("")
     escreval("")
     escreva("Nota obtida :",media)
    senao
     escreva("O aluno est� reprovado!")
     escreval("")
     escreval("")
     escreva("Nota obtida :",media)
 fimse
 fimse
fimalgoritmo

