//Ler um vetor A e B, cada um com 10 elementos. Gerar uma matriz C onde cada elemento corresponde a 
//A + B. Pesquise um dado fornecido pelo usuário no vetor C

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int i = 0, contador, NA[10], NB[10], soma[10], pesquisa;
    setlocale(LC_ALL, "portuguese");
//Entrada:
	for(contador = 0; contador < 10; contador++){
		printf("%d. Digite o número correspondente A: ", ++i, contador + 1);
		scanf("%d", &NA[i]);}
		i = 0;
		printf("\n");
	for(contador = 0; contador < 10; contador++){	
		printf("%d. Digite o número correspondente B: ", ++i, contador + 1);
		scanf("%d", &NB[i]);}
//Saída:
    printf("\nResultados: ");
	for(contador = 0; contador < 10; contador++){
		soma[i] = NA[i] + NB[i];
		printf("\n%d + %d: %d", NA[i], NB[i], soma[i]);}	
	printf("\n\nPesquisa de resultados: ");
	scanf("%d", &pesquisa);
	for(contador = 0; contador < 10; contador++){
		if(soma[i] == pesquisa){
			printf("", i+1);
		      }else{
		      	printf("\nNúmero não encontrado!");}
}
	
return 0;	
}

