algoritmo "MEDIA_ESCOLAR"
// Função :
// Autor :
// Data : 10/6/2017
// Seção de Declarações 
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
   escreva("O aluno está aprovado!")
   escreval("")
   escreval("")
   escreva("Nota obtida :",media)

   senao
    escreval("O aluno ficou de recuperação:")
    escreval(" ")
    escreval("Por favor, digite a nota de exame :")
    leia (exame)
    escreval("")
    media<- (exame+media)/2
    se (media>=5)entao
     escreva("O aluno está aprovado!")
     escreval("")
     escreval("")
     escreva("Nota obtida :",media)
    senao
     escreva("O aluno está reprovado!")
     escreval("")
     escreval("")
     escreva("Nota obtida :",media)
 fimse
 fimse
fimalgoritmo

