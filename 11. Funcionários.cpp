//Elabore um algoritmo que armazene o c�digo funcional inteiro e respectivo sal�rio real de todos os 
//funcion�rios de uma empresa. Ap�s a leitura de todos os dados apresente o maior e o menor sal�rio entre 
// funcion�rios da empresa, usando um subprograma para encontrar o maior e outro para encontrar o 
//menor. Por fim, acione uma outra fun��o para calcular a m�dia salarial paga por esta empresa. O maior e 
//menor sal�rio dever�o ser apresentados por um procedimento acionado pelo algoritmo principal. A m�dia 
//salarial dever� ser apresentada por um procedimento acionado pela fun��o que calcula a m�dia

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int contador = 0, i = 0, funcionarios, cont, salarios[100], codigo[100], soma = 0;
	int maiorSalario = 0, menorSalario = 0, salario = 0, matricula, matriculasIguais;
    double mediaSalario;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Digite a quantidade de funcion�rios: ");
    fflush(stdin);
	scanf("%d", &funcionarios); 
    for(contador = 0; contador < 100; contador++){
        printf("%d. Matr�cula: ", ++i);
		fflush(stdin);
		scanf("%i", &matricula);
    for(int cont = 0; cont < funcionarios; cont++)
        printf("Sal�rio: ");
        scanf("%d", &salario);
		fflush(stdin);
    if(!matriculasIguais){
		salarios[funcionarios] = salario;
		codigo[funcionarios] = matricula;
		funcionarios++;
	if(salario > maiorSalario) maiorSalario = salario;
	if(salario < menorSalario) menorSalario = salario;
	   soma = soma + salario;
	} else printf("Inv�lido!\n");
	}

	mediaSalario = soma / funcionarios;
//Sa�da:
    printf("M�dia dos sal�rios: %d\n", mediaSalario);
	printf("Maior sal�rio: %d\n", maiorSalario);
	printf("Menor%d\n", menorSalario);
	
return 0;	
}
