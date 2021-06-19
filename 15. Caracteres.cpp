//Alterar o algoritmo de ordenação de caracteres para pesquisar um caractere específico.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int contador, i = 0, qLetras, pesquisa;
    char letra[i];
    setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("Quantas letras deseja declarar? ");
	scanf("%d", &qLetras);
	fflush(stdin);
	for(contador = 1; contador <= qLetras; contador++){
		printf("\n%d. Informe a letra: ", ++i);
		scanf("%c", &letra[i]);
		fflush(stdin);}
	printf("\nPesquisar o caracter: ");
	scanf("%c", &pesquisa);	
	for(contador = 1; contador <= qLetras; contador++){
		if(letra[i] == pesquisa){
		printf("Caracter %d está na %d posição!", pesquisa, i);
		}else{
			printf("Caracter não encontrado!");}
	}	
	
return 0;	
}
