#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	float bolsavalores=5600, carro,total=5600,poupanca=5600, fundosimobiliario=5600;
	int contpoupanca=0, contfundosimobiliario=0, contvalores=0;
	
	
	printf("Digite o valor do carro\n");
	scanf("%f", &carro);
	
	while(carro>=poupanca){
		poupanca=poupanca + (poupanca*(0.03));
		contpoupanca=contpoupanca+1;
	}
	
	while(carro>=fundosimobiliario){
		fundosimobiliario=fundosimobiliario+(fundosimobiliario*(0.07));
		contfundosimobiliario=contfundosimobiliario+1;
	}
	
	while(carro>=bolsavalores){
	   bolsavalores=bolsavalores+(bolsavalores*(0.11));
	   contvalores=contvalores+1;
	}
	
	printf("Rentabilidade poupanca: %i\n", contpoupanca);
	printf("Rentabilidade fundos imobiliario: %i\n", contfundosimobiliario);
	printf("Rentabilidade bolsa de valores: %i\n", contvalores);
	
}




