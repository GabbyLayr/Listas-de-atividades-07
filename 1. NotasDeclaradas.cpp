// Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
//Declaração de variáveis:	
	int i, contador, nota[30];
	setlocale (LC_ALL, "portuguese");
//Entrada/ processamento:
	for (contador = 0; contador < 30; contador++){
		printf("Digite a nota do aluno %d: ", ++i);
		scanf("%d", &nota[i]);}
//Saída:
    printf("\n\nNotas dos alunos:\n");
	for (contador = 0; contador <= 30; contador++){
	    printf("\nNota declarada: %d", nota[contador]);}
		
 return 0;	
}
