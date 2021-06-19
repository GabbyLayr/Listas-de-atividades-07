// Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa (máximo 
//de 100 funcionários). Após a leitura de todos os dados, informe em uma tela limpa os dados lidos e o maior e 
//menor salário dos funcionários. O maior e menor salário deverão ser obtidos, cada um, por uma função. 
//Sabe-se ainda que não existe matrícula repetida na empresa

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int i = 0, contador, quantidade, matricula[100];
    float salario[100];
    setlocale(LC_ALL, "portuguese");
//Entrada:
do{
    printf("Quantas funcionários deseja declarar? ");
    scanf("%d", &quantidade);
    if(quantidade >= 101){
    	printf("Inválido! Tente novamente:\n");}
}while(quantidade >= 101);
    for(contador = 0; contador < quantidade; contador++){
    	printf("\n%d. Digite sua matrícula: ", ++i);
    	scanf("%d", &matricula[i]);
    	printf(">Digite seu salário: ");
    	scanf("%f", &salario[i]);}
//Saída:
system("cls");
	for(contador = 0; contador < quantidade; contador++){
		printf("\nFuncionário: %d", matricula[i]);
		printf("\nSalário: %.2f", salario[i]);}
	
return 0;	
}
