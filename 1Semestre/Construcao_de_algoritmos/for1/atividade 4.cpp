#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Crie um algoritmo que imprima a tabela de convers�o de graus Celsius-Fahrenheit para o intervalo desejado pelo usu�rio. 
O algoritmo deve solicitar ao usu�rio o limite superior e o limite inferior. A f�rmula usada para convers�o �: C = 5 * (F � 32) / 9*/


int main()
{
	
	int inicio, fim;
	int convertido,i;
	
	printf("Digite o valor inicial da conversao \n");
	scanf("%i", &inicio);
	
	printf("Digite o valor final da conversao \n");
	scanf("%i", &fim);
	
	if(inicio < fim){
		for (i = inicio; i <= fim; i++){
			convertido= 5*(i-32)/9;
			printf("%i c = %i f \n", i , convertido);
		}
	}
	
	else if(inicio > fim){
		for(i = inicio; i >= fim; i--){
			convertido = 5* (i - 32)/ 9;
			printf("%i c = %i f \n", i, convertido);
		}
	}
		
}

   
