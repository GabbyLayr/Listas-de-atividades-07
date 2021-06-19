// Escrever um algoritmo que solicite e leia letra por letra o nome completo de uma pessoa. O caractere 
//sustenido “#” indica o fim do nome. Depois de lê-lo apresente todo o nome informado, sem o #

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int contador = 0, cont = 0, i = 0;
    char letra[100];
    setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("Digite seu nome:\n");
	printf(">Letra por letra\n>Em MAIÚSCULO\n>Com espaçamento entre cada letra\n>Finalize inserindo '#'\n");
do{
	printf("\n%d.Informe a letra: \n", ++i);
	scanf("%s", &letra[contador]);
	i++;
}while (letra[i] != '#');
//Saída:
	for(cont = 0; cont < contador - 1; cont++){
	   printf("%s", letra[cont]);} 
	
return 0;	
}
