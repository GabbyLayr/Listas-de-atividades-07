//  Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem (menos que 
//50). O número de aluno será informado pelo usuário
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
//Declaração de variáveis:	
	int i, contador, nota[50], quantidadeAlunos;
	setlocale (LC_ALL, "portuguese");
//Entrada:
do{
	printf("Quantos alunos deseja declarar nota: ");
    scanf("%d", &quantidadeAlunos);
    if(quantidadeAlunos >= 51){
    	printf("Valor Invalido! Tente novamente:\n");}
}while(quantidadeAlunos >= 51);

	for (contador = 0; contador < quantidadeAlunos; contador++){
		printf("Digite a nota do aluno %d: ", ++i);
		scanf("%d", &nota[i]);}

//Saída:
    printf("\n\nNotas dos alunos:\n");
	for (contador = 0; contador <= quantidadeAlunos; contador++){
	    printf("\nNota declarada: %d", nota[contador]);}
		
 return 0;	
}
