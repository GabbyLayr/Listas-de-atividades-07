// Fa�a um algoritmo que calcule e escreva o somat�rio dos valores armazenados numa vari�vel composta 
//unidimensional, chamada dados, de at� 100 elementos num�ricos a serem lidos.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int armazenar, contador, contador2, i = 0, numeros[100], soma = 0;
    setlocale(LC_ALL, "portuguese");
//Entrada:
do{
    printf("Quantos n�meros deseja armazenar? ");
    scanf("%d", &armazenar);
    if (armazenar >= 101){
    	printf("\nInv�lido! Tente novamente:\n");}
}while (armazenar >= 100);

    for(contador = 0; contador <= armazenar; contador++){
		printf("\n%d. Digite um n�mero: ", ++i);
		scanf("%d", &numeros[contador]);}
	for(contador2 = 0; contador2 < armazenar; contador2++){
		soma = soma + numeros[contador2];}  
//Sa�da:
	printf("Soma dos n�meros armazenados: %d", soma);	
	
return 0;	
}
