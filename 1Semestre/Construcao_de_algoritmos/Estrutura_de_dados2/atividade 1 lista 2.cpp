#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*egundo recomendações médicas, o peso ideal está relacionado com a altura e o sexo do indivíduo. Faça um algoritmo que receba o peso, a altura e o sexo do usuário e calcule o seu peso ideal de acordo
 com as fórmulas a seguir:

·         Para homens: (72.7 * altura) - 58

·         Para mulheres: (62.1 * altura) -44.7

Ao final seu algoritmo deverá apresentar o peso atual do usuário e a diferença para o seu peso ideal. */


int main()
{
	float peso, altura ,pesoideal, diferenca;
	int sexo;
	
	while(true){
		printf("Digite seu sexo: 1. Masculino 2. Feminino \n");
		scanf("%i", &sexo);
		
		printf("Digite a sua altura \n");
		scanf("%f", &altura);
		
		printf("Digite o seu peso \n");
		scanf("%f", &peso);
		
		if(sexo ==1){
			pesoideal = (72,7 * altura)- 58;
			
		if(peso < pesoideal){
			diferenca=pesoideal - peso;
			printf("Engordar \n");
			
		}
		
		else{
			printf("Emagrecer \n");
			diferenca= peso - pesoideal;
		}
			
			
		}
	}
	
		
}


