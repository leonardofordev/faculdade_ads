#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//seu algoritmo deve apresentar o valor total arrecadado pela receita federal com a cobrança desses impostos.
int main()
{
	

    float salario, inss, total;
    int x;
    for(x=0; x<5; x= x+1){
	
    printf("Digite o seu salario: \n");
    scanf("%f", &salario);
    
    if(salario>= 0 && salario<600){
    	inss= 0;
    	printf("isento \n");
	}
	
	else if(salario >= 600 && salario <1500){
		inss= salario *0.10;
		printf("%f\n", inss);
	}
	
	else if(salario >1500 ){
		inss= salario *0.15;
		printf("%f\n");
		 
	}
	total+=inss;
	printf("Total: %2.f \n", total);
}

}


