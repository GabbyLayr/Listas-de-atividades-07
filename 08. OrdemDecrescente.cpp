// Fazer um algoritmo que leia até 30 caracteres e os ordene em ordem decrescente. É considerado que A < 
//B < C < ... (ordem alfabética).

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int letras, i = 0, contador, troca, cont;
    char letra[30];
    setlocale(LC_ALL, "portuguese");
//Entrada:

    printf("Informe quantas letras possui: ");
	scanf("%d",&letras);
	fflush(stdin);	
	for(contador = 1;contador <= letras; contador++){
		printf("%d. Digite a letra: ", ++i);
		scanf("%c",&letra[contador]);
		fflush(stdin);}	
	for(contador = 1; contador <= letras; contador++){
		for(cont = cont + 1;cont <= letra[30]; cont++){
			if(letra[contador] < letra[cont]){
				troca = letra[cont];
				letra[cont] = letra[contador];
				letra[contador] = troca;
			}
		}
	}	
	printf("\nOrdem decrescente:\n");
	for(contador = 1; contador <= letras ;contador++){
		printf("%c . ",letra[contador]);
	}	
	return 0;
//Saída:
	
	
	
	
	
return 0;	
}
