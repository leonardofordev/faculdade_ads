#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	/*
	Crie um algoritmo que receba a idade e o peso de 10 pessoas. Calcule e imprima a média dos 
	pesos das pessoas da mesma faixa etária (de 1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e maiores de 30 anos).
	*/
	
	int x,idade;
	
	float totalG110,totalp110,totalG1120,totalp1120,totalG2130,totalp2130,totalG30,totalp30;
	float Peso;
	for(x=0;x<2;x++){
		printf("Digite a idade da pessoa %d: \n",x+1);
		scanf("%d",&idade);
		printf("Digite o peso da pessoa %d: \n",x+1);
		scanf("%f",&Peso);
	
		
		
	if(idade>1 && idade<=10)	{
	totalG110=totalG110+1;
	totalp110=totalp110+Peso;
	}
	
	else if(idade>11 && idade<=20)	{
	totalG1120=totalG1120+1;
	totalp1120=totalp1120+Peso;
	}
	
	else if(idade>21 && idade<=30)	{
	totalG2130=totalG2130+1;
	totalp2130=totalp2130+Peso;
	}
	
	else if(idade>30)	{
	totalG30=totalG30+1;
	totalp30=totalp30+Peso;
	}
	
	
	}	
	printf("A media do peso dessas pessoas e:  \n");

	printf("1 a 10 : %.2f kg/pessoa \n",totalp110/totalG110);
	printf("11 a 20: %.2f kg/pessoa \n",totalp1120/totalG1120);
	printf("21 a 30 : %.2f kg/pessoa \n",totalp2130/totalG2130);
	printf("30 em diante : %.2f kg/pessoa \n",totalp30/totalG30);

	
}
