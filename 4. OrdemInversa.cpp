//Fa�a um algoritmo que leia at� 30 letras e as escreva na ordem inversa (ou contr�ria) da que foram lida.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){	
//Declara��o de vari�veis:
    int quantidade = 0, contador, i= 0;
    char letras[30];
    setlocale(LC_ALL, "portuguese");
//Entrada:
do{
    printf("Quantas letras deseja declarar? ");
    scanf("%d", &quantidade);
    if(quantidade >= 31){
    	printf("Inv�lido! Tente novamente:\n");}
}while(quantidade >= 31);
    for (contador = 0; contador < quantidade; contador++) {
		printf("\n%d. Digite uma letra: ", ++i);
		scanf(" %c", &letras[i]);}
//Sa�da:
    printf("O contr�rio das letras digitadas �:\n");
	for (contador = quantidade; contador >= 0; contador--){
	printf("%c.", letras[contador]);}

	
	
	
	
	
return 0;	
}
