// Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável composta 
//unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int armazenar, contador, contador2, i = 0, numeros[100], soma = 0;
    setlocale(LC_ALL, "portuguese");
//Entrada:
do{
    printf("Quantos números deseja armazenar? ");
    scanf("%d", &armazenar);
    if (armazenar >= 101){
    	printf("\nInválido! Tente novamente:\n");}
}while (armazenar >= 100);

    for(contador = 0; contador <= armazenar; contador++){
		printf("\n%d. Digite um número: ", ++i);
		scanf("%d", &numeros[contador]);}
	for(contador2 = 0; contador2 < armazenar; contador2++){
		soma = soma + numeros[contador2];}  
//Saída:
	printf("Soma dos números armazenados: %d", soma);	
	
return 0;	
}
