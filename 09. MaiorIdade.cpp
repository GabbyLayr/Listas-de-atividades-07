// Fa�a um algoritmo que leia a idade de at� 100 pessoas e apresente a m�dia entre todas, al�m de 
//identificar a mais velha e a posi��o em que ela se encontra no vetor. A idade mais velha pode aparecer em 
//mais de uma posi��o.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
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
//Sa�da:
    printf("\n>M�dia de idades: %.2lf. ", media);
	printf("\n>Maior idade: %d ", maior);
	
return 0;	
}
