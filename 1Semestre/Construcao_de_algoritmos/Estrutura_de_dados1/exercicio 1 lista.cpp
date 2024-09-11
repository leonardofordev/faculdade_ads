#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	float salario, emprestimo, prestacao,juros, liberado;
	
	//escreva
	printf("Digite o salario do funcionario \n");
	//leia
	scanf("%f", &salario);
	
	//calculo
	prestacao= salario *0.3;
	
	if(prestacao >=100){
		printf("Vamos fazer o seu emprestimo");
	emprestimo = 36*prestacao;
	juros= emprestimo * 0.15;
	liberado= emprestimo - juros;
	
	printf("Valor total do contrato: %f \n", emprestimo);
	printf("Valor total do emprestimo: %f \n", liberado);
	printf("Juros: %f \n", juros);
	printf("Valor da parcela: %f \n", prestacao);
	
		
}

   else if(prestacao >= 0 && prestacao <100){
   	printf("Voce nao possui valores para emprestimo");
   }
   else{
   	printf("Valor digitado eh invalido ");
   }
	
	
		
}


