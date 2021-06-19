//Elabore um algoritmo que armazene o código funcional inteiro e respectivo salário real de todos os 
//funcionários de uma empresa. Após a leitura de todos os dados apresente o maior e o menor salário entre 
// funcionários da empresa, usando um subprograma para encontrar o maior e outro para encontrar o 
//menor. Por fim, acione uma outra função para calcular a média salarial paga por esta empresa. O maior e 
//menor salário deverão ser apresentados por um procedimento acionado pelo algoritmo principal. A média 
//salarial deverá ser apresentada por um procedimento acionado pela função que calcula a média

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int contador = 0, i = 0, funcionarios, cont, salarios[100], codigo[100], soma = 0;
	int maiorSalario = 0, menorSalario = 0, salario = 0, matricula, matriculasIguais;
    double mediaSalario;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Digite a quantidade de funcionários: ");
    fflush(stdin);
	scanf("%d", &funcionarios); 
    for(contador = 0; contador < 100; contador++){
        printf("%d. Matrícula: ", ++i);
		fflush(stdin);
		scanf("%i", &matricula);
    for(int cont = 0; cont < funcionarios; cont++)
        printf("Salário: ");
        scanf("%d", &salario);
		fflush(stdin);
    if(!matriculasIguais){
		salarios[funcionarios] = salario;
		codigo[funcionarios] = matricula;
		funcionarios++;
	if(salario > maiorSalario) maiorSalario = salario;
	if(salario < menorSalario) menorSalario = salario;
	   soma = soma + salario;
	} else printf("Inválido!\n");
	}

	mediaSalario = soma / funcionarios;
//Saída:
    printf("Média dos salários: %d\n", mediaSalario);
	printf("Maior salário: %d\n", maiorSalario);
	printf("Menor%d\n", menorSalario);
	
return 0;	
}
