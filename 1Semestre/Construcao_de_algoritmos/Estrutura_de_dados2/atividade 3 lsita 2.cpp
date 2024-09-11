#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Crie um algoritmo que leia a idade de uma pessoa e informe a sua classe eleitoral.

·         Não eleitor (abaixo de 16 anos)

·         Eleitor obrigatório (entre 18 e 65 anos)

·         Eleitor facultativo (entre 16 e 18 anos e maior que 65 anos)*/


int main()
{
     int idade;
     
     //escreva
     printf("Escreva a idade da pessoa para saber a classe eleitoral: \n");
     //leia
     scanf("%i", &idade);
     
     if(idade < 16){
     	printf("Nao eleitor.");
	 }
	 
	else if(idade>=16 && idade<=18 || idade>65){
        printf("Eleitor facultativo\n");
    }
	 
	 else if(idade >=18 && idade <=65){
	 	printf("Eleitor obrigatorio");
	 }
     
     
    
	
	
		
}


