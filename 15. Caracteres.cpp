//Alterar o algoritmo de ordena��o de caracteres para pesquisar um caractere espec�fico.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
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
		printf("Caracter %d est� na %d posi��o!", pesquisa, i);
		}else{
			printf("Caracter n�o encontrado!");}
	}	
	
return 0;	
}
