#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>




int main()
{
	int idade;
	
	printf("Coloque a idade do usuario: ");
	scanf("%i", &idade);
	
	if(idade >= 0 && idade<= 10){
		printf("Valor do plano: 10 R$");
		
	
	}
	
	else if(idade >10 && idade <=29){
		printf("Valor do plano: 60 R$");
	}
	
	else if(idade >29 && idade <=45){
		printf("Valor do plano: 120 R$");
	}
	
	else if(idade >45 && idade <=59){
		printf("Valor do plano: 150 R$");
	}
	
	else if(idade >59 && idade <=65){
		printf("Valor do plano: 250 R$");
	}
	
	else if(idade >65){
		printf("Valor do plano: 400 R$");
	}
	
	
   

		
}


