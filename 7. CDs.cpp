// Desenvolva um algoritmo que cadastre os pre�os de at� 100 diferentes CDs em uma loja. Ap�s este 
//cadastro, o algoritmo dever� possibilitar a execu��o de uma de duas fun��es para aumento dos pre�os 
//cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda aumenta o percentual 
//informado pelo vendedor para todos os CDs. Ser� o vendedor que escolher� o tipo de aumento desejado. 
//Ap�s os c�lculos dever� ser apresentado o percentual de aumento e, para cada CD, o valor sem aumento e o 
//valor com aumento.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int i = 0, contador = 0, quantidade[100], preco[100];
    setlocale(LC_ALL, "portuguese");
//Entrada:
do{
    printf("Digite a quantidade de CDs que voc� deseja declarar: ");
	fflush(stdin);
	scanf("%d", &quantidade);
}while 
	for(contador = 0; contador < quantidade; i++){
	    printf("\n%d. Valor do CD: ", ++i);
		fflush(stdin);
		scanf("%i", &preco[i]);}
	
	            printf("\nESCOLHA A OP��O DESEJADA!\n");
	            printf(" 1 - Pra aumentar em 10 porcento o valor! \n");
	            printf(" 2 - Para aumentar de acordo com o porcentual informado! \n");
	            
	            printf("\n Qual op��o: ");
	            fflush(stdin);
	            scanf("%i", &numero);
	            
	    switch(numero){
	    	
		    case 1: 
		        for(i = 0; i < quantidadeCds; i++)
			        precoFinal[i] = (precoCds[i] * (1 + 0.1));
		    break;
		
		    case 2:
			        printf("Informe o valor percentual: ");
			        fflush(stdin);
			        scanf("%lf", &percentual);
			        
		        for(i = 0; i < quantidadeCds; i++)
			        precoFinal[i] = (precoCds[i] * (1 + (percentual / 100)));
		    break;
		    
	        default:
                    printf("\nOp��o invalida!!!");
    }
    
	for(i = 0; i < quantidadeCds; i++){
		if(numero == 1)
		printf("O valor de aumento percentual foi 10 por cento\n");
			
		else{
		printf("O valor de aumento percentual foi %.2lf\n", percentual);		
		printf("O valor sem aumento era: %.2i\n", precoCds[i]);
		printf("O valor com aumento: %.2lf\n", precoFinal[i]);
	    }
		
	}


//Sa�da:
	
	
	
	
	
return 0;	
}
