algoritmo "ORDEM_CRESCENTE"
// Fun��o :
// Autor :
// Data : 10/6/2017
// Se��o de Declara��es 
var
num1,num2,num3,num4:inteiro
inicio
escreva("Digite o primeiro n�mero : ")
leia (num1)
escreva("Digite o segundo n�mero : ")
leia (num2)
escreva("Digite o terceiro n�mero : ")
leia (num3)
 se ((num1=num2) e (num2=num3))entao
    escreva("Os numeros s�o iguais")
    escreval("")
    escreva(num1,"=",num2,"=",num3)
 //num1 maior de todos e o num3 o menor
 senao
  se ((num1>num2)e(num2>num3))entao
    escreva(num1,">",num2,">",num3)

  senao
    //num1 maior de todos e o num2 o menor
    se ((num1>num2)e(num3>num2)e(num1>num3))entao
    escreva(num1,">",num3,">",num2)

    senao
      //o num2 � maior de todos e o num3 menor
      se ((num2>num1)e(num1>num3))entao
        escreva(num2,">",num1,">",num3)
       senao
       //o num2 � o maior de todos e o num1 � o menor
       se ((num2>num3)e(num3>num1))entao
         escreva(num2,">",num3,">",num1)
         senao
         //o num3 � o maior de todos e o num2 � o menor
           se ((num3>num1)e(num1>num2))entao
              escreva(num3,">",num1,">",num2)
              senao
              //o num3 � o maior de todos e o num1 � o menor
              se ((num3>num1)e(num2>num1))entao
                escreva(num3,">",num2,">",num1)

fimse
fimse
fimse
fimse
fimse
fimse

fimalgoritmo
fimse
