//Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80 notas, variando 
//de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de cada nota e apresente uma 
//tabela contendo os valores das notas e suas respectivas frequências.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int alunos = 0, contador = 0, i, frequencia[10] = {0}, nota = 0;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);
    fflush(stdin);
    for (contador = 1; contador <= alunos; contador++){
        printf("Digite a nota do aluno %d: ", i);
        fflush(stdin);
        scanf("%d", &nota);
    for (contador = 0; contador <= 10; contador++){
      if (nota == contador){
        frequencia[contador]++;}
        }
    }
//Saída:
    for (contador = 0; contador <= 10; contador++){
        if (frequencia[contador] != 0){
            printf("A nota %d se repete %d vezes!", contador, frequencia[contador]);
        }
    }	
	
return 0;	
} 
