// Fazer um algoritmo/programa que leia a matricula e o sal�rio dos funcion�rios de uma empresa (m�ximo 
//de 100 funcion�rios). Ap�s a leitura de todos os dados, informe em uma tela limpa os dados lidos e o maior e 
//menor sal�rio dos funcion�rios. O maior e menor sal�rio dever�o ser obtidos, cada um, por uma fun��o. 
//Sabe-se ainda que n�o existe matr�cula repetida na empresa

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int i = 0, contador, quantidade, matricula[100];
    float salario[100];
    setlocale(LC_ALL, "portuguese");
//Entrada:
do{
    printf("Quantas funcion�rios deseja declarar? ");
    scanf("%d", &quantidade);
    if(quantidade >= 101){
    	printf("Inv�lido! Tente novamente:\n");}
}while(quantidade >= 101);
    for(contador = 0; contador < quantidade; contador++){
    	printf("\n%d. Digite sua matr�cula: ", ++i);
    	scanf("%d", &matricula[i]);
    	printf(">Digite seu sal�rio: ");
    	scanf("%f", &salario[i]);}
//Sa�da:
system("cls");
	for(contador = 0; contador < quantidade; contador++){
		printf("\nFuncion�rio: %d", matricula[i]);
		printf("\nSal�rio: %.2f", salario[i]);}
	
return 0;	
}
