// Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além de 
//identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha pode aparecer em 
//mais de uma posição.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int soma = 0, media = 0, pessoas = 0, i = 0, contador = 0, maior = 0, idade[100];
    setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("Quantidade de pessoas: ");
	fflush(stdin);
	scanf("%d", &pessoas);
    for(contador = 0; contador < pessoas; contador++){
		printf("%d. Idade: ", ++i, idade[100]);
		fflush(stdin);
		scanf("%i", &idade[i]);
	soma = (soma + idade[i]); 
		if(maior < idade[i])
			maior = idade[i];
	}
	media = (soma / pessoas);
//Saída:
    printf("\n>Média de idades: %.2lf. ", media);
	printf("\n>Maior idade: %d ", maior);
	
return 0;	
}
