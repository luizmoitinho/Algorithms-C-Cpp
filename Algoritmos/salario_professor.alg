algoritmo "SALARIO_PROFESSOR"
// Função :
// Autor :
// Data : 10/4/2017
// Seção de Declarações 
var
   HT:inteiro
   VH,SB,SL,PD,TD:real
inicio
 escreva("Digite o valor da hora aula :")
 leia (VH)
 escreva("Digite o valor de horas trabalhadas :")
 leia (HT)
 escreva("Digite o valor do percentual de desconto :")
 leia (PD)
 SB <- VH*HT
 TD <-(PD/100)*SB
 SL <- SB-TD
 escreva ("O salário bruto é:", SB)
 escreva (" ")
 escreva (" ")
 escreva ("O salário liquido é:", SL)
fimalgoritmo
