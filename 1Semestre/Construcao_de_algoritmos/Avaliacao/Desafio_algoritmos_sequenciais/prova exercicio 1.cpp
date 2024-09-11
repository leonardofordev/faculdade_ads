#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//A Padaria Padoca vende certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0.25 e cada
// broa custa R$ 0.35. Cada venda de pão e/ou broa é devidamente contabilizada. Todo dia, no final do expediente, o dono da Padoca quer saber 
//quanto arrecadou com as vendas. Crie um algoritmo que receba a quantidade de pães e broas vendidos e apresente o total obtido ao final do dia. 
//Sabendo que 45% do valor total arrecadado com as vendas é referente ao custo de produção, 30% é aplicado em uma conta poupança da empresa e 
//25% é referente ao lucro obtido, crie um algoritmo que calcule e apresente essas informações.

// quantidade de pães e broas vendidos e apresente o total obtido ao final do dia.


int main()
{
	//informacoes
	float ValorPao=0.25, ValorBroa=0.35,pao,broa, ValorArrecadado,CustoProducao=0.45,Contapoupanca, LucroObtido, QuantidadePaoBroa;
	
	//Escreva
	printf("Escreva a quantidade de paes vendidos \n");
	//leia
	scanf("%f", &pao);
	
	//Escreva
	printf("Escreva a quantidade de broas vendidas \n");
	//leia
	scanf("%f", &broa);
	
	//Calculo 
	QuantidadePaoBroa= pao + broa;
	ValorArrecadado= (pao*ValorPao)+(broa*ValorBroa);
	CustoProducao= ValorArrecadado*0.45;
	Contapoupanca= ValorArrecadado*0.3;
	LucroObtido= ValorArrecadado*0.25;
	
	printf("Essa sera a quantidade de pao e broas vendidos: %2.f \n", QuantidadePaoBroa);
	printf("Essa sera o valor total obtido ao final do dia: %2.f \n", ValorArrecadado);
	printf("Essa sera o valor do custo de produção: %f \n", CustoProducao);
	printf("Esse sera o valor da conta poupanca: %f \n", Contapoupanca);
	printf("Esse sera o valor do lucro obtido: %f \n", LucroObtido);
	
	 
	
	
	
	
	
	
	
	
  
	
	 
		
}


