//  Altere o algoritmo anterior considerando que n�o se conhece quantos alunos esta turma tem (menos que 
//50). O n�mero de aluno ser� informado pelo usu�rio
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
//Declara��o de vari�veis:	
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

//Sa�da:
    printf("\n\nNotas dos alunos:\n");
	for (contador = 0; contador <= quantidadeAlunos; contador++){
	    printf("\nNota declarada: %d", nota[contador]);}
		
 return 0;	
}
