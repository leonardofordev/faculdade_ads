#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*egundo recomenda��es m�dicas, o peso ideal est� relacionado com a altura e o sexo do indiv�duo. Fa�a um algoritmo que receba o peso, a altura e o sexo do usu�rio e calcule o seu peso ideal de acordo
 com as f�rmulas a seguir:

�         Para homens: (72.7 * altura) - 58

�         Para mulheres: (62.1 * altura) -44.7

Ao final seu algoritmo dever� apresentar o peso atual do usu�rio e a diferen�a para o seu peso ideal. */


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


