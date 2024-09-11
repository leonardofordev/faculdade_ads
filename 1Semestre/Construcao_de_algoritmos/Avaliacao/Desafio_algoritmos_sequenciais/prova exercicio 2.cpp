#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//A prefeitura municipal de Corumbá está realizando um mutirão de limpeza de terrenos pela cidade e para isso contratou uma empresa terceirizada. 
//Sabendo que essa empresa cobra o valor de R$ 22.50 para cada metro quadrado de terreno limpo acrescido de um imposto de 
//10%. Escreva um algoritmo que receba as dimensões de um terreno e apresente seu tamanho e o valor que será cobrado pela sua limpeza.


int main()
{
	//informações
	float base, altura, imposto= 0.1, valor=22.5, dimensao, ValorCobrado, ValorCImposto;
	
	//escreva
	printf("Escreva o valor da base do terreno \n");
	//leia
	scanf("%f", &base);
	//escreva
	printf("Escreva o valor da altura do terreno \n");
	//leia
	scanf("%f", &altura);
	
	//calculo
	
	dimensao= base*altura;
	
	ValorCobrado= dimensao*valor;
	ValorCImposto= ValorCobrado*1.1;
	
	
	//ValorCImposto= dimensao*imposto;
	
	
	//resultado
	
	printf("Esse sera o valor da sua dimensao: %2.f. \n", dimensao);
	printf("Esse sera o valor que será cobrado pela sua limpeza: %f \n", ValorCobrado);
	printf("Esse sera o valor cobrado com imposto: %.2f \n", ValorCImposto);
	
	
	
		
}


