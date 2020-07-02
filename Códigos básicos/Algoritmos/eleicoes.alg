algoritmo "ELEICAO"
// Função :
// Autor :
// Data : 10/5/2017
// Seção de Declarações 
var
 //variáveis do candidato a
 a,nulo_a,branco_a,valido_a,total_a:inteiro
 percentual_valido_a:real
 //variáveis do candidato c
 b,nulo_b,branco_b,valido_b,total_b:inteiro
 percentual_valido_b:real
 //variáveis do candidato c
 c,nulo_c,branco_c,valido_c,total_c:inteiro
 percentual_valido_c:real

 total_eleitores,percentual_nulos,percentual_branco:real
inicio
// Dados com relação ao candidato a
escreval("Digite dados referente ao candidato A : ")
leia()
escreval("Votos nulos:")
leia(nulo_a)
escreval("Votos em branco:")
leia(branco_a)
escreval("votos válidos:")
leia (valido_a)
     //cálcula o total de votos de a
     total_a<-nulo_a+branco_a+valido_a
     //cálcula o percentual de votos de a
     percentual_valido_a<-(valido_a*100)/total_a
escreval("")
// Dados com relação ao candidato B
escreval("Digite dados referente ao candidato B : ")
leia()
escreval("Votos nulos:")
leia(nulo_b)
escreval("Votos em branco:")
leia(branco_b)
escreval("votos válidos:")
leia (valido_b)
     //cálcula o total de votos de a
     total_b<-nulo_b+branco_b+valido_b
     //cálcula o percentual de votos de a
     percentual_valido_b<-(valido_b*100)/total_b
escreval("")
// Dados com relação ao candidato B
escreval("Digite dados referente ao candidato c : ")
leia()
escreval("Votos nulos:")
leia(nulo_c)
escreval("Votos em branco:")
leia(branco_c)
escreval("votos válidos:")
leia (valido_c)
     //cálcula o total de votos de c
     total_c<-nulo_c+branco_c+valido_c
     //cálcula o percentual de votos de c
     percentual_valido_c<-(valido_c*100)/total_c
escreval("")

     //Cálcula o número total de eleitores
     total_eleitores<-total_a+total_b+total_c
     //cálcula o percentual de todos votos nulos
     percentual_nulos<-((nulo_a+nulo_b+nulo_c)*100)/total_eleitores
     //cácula o percentual de todos votos em bracos
     percentual_branco<-((branco_a+branco_b+branco_c)*100)/total_eleitores)

//Exibe todos os dados do candidato A

escreval("Dados referentes ao candidato a:")
leia()
escreval("O total de votos:",total_a)
escreval("O percentual de votos válidos: ",percentual_valido_a,"%")
escreval("")
//Exibe todos os dados do candidato B
escreval("")

escreval("Dados referentes ao candidato B:")
leia()
escreval("O total de votos:",total_b)
escreval("O percentual de votos válidos: ",percentual_valido_b,"%")
escreval("")
//Exibe todos os dados do candidato C

escreval("Dados referentes ao candidato C:")
leia()
escreval("O total de votos:",total_c)
escreval("O percentual de votos válidos: ",percentual_valido_c,"%")
escreval("")

//O percentual de votos nulos na eleição
escreval("O percentual de votos nulos: ",percentual_nulos,"%")
escreval("O percentual de votos em branco: ",percentual_branco,"%")
fimalgoritmo
