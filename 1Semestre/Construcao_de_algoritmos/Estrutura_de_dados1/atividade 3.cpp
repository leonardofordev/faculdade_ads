#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Escreva um algoritmo que receba o salário de uma pessoa, calcule e imprima o desconto do 
INSS segundo a tabela a seguir: */


int main()
{
	//dados
  float salario, desconto;
  //escreva
  printf("Escreva o salario \n");
  //leia
  scanf("%f", &salario);
  
  //declarações
  if(salario <= 600){
  	printf("Isento");
  }
  
  else if(salario > 600 && salario <=1200){
  	desconto= (0.2 *salario);
  	printf("O desconto do INSS sera de %2.f reais.",desconto);
  }
  
  else if(salario > 1200 && salario <=2000){
  	desconto = (0.25 *salario);
  	printf("O desconto do INSS sera de %2.f reais", desconto);
  }
  
  else{
  	desconto= (0.3 * salario);
  	printf("O desconto do INSS sera de %2.f reais", desconto);
  }

	
		
}


