#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	int i, maximo;
	float convertido;
	float const centimetros= 2.54;
	
	
	printf("Convertendo polegadas em centimetro\n");
	printf("Digite o valor maximo de conversao\n");
	scanf("%i", &maximo);
	
	
	for(i = 1; i <=maximo; i++){
		convertido = i* centimetros;
		printf("%i polegadas = %.2f centimetros \n ", i, convertido);
	}
	
	
	
	
		
}


