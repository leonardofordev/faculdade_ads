#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	float valor, francosuico, libraestrelina, dolaramericano, marcoalemao, opcao;
	
	printf("Digite o valor qe quer converter \n");
	scanf("%f", &valor);
	
	printf("Para franco suico digite 1 \n");
	printf("Para libra estrelina digite 2 \n");
	printf("Para dolar americano digite 3 \n");
	printf("Para marco alemao  digite 4 \n");	
	scanf("%f", &opcao);
	
	if(opcao==1){
		francosuico= valor/ 2.75;
		printf("O valor do franco suico= %2.f", francosuico);
		
	}
	
	else if(opcao==2){
		libraestrelina= valor/3.15;
		printf("O valor da libra estrelina= %2.f", libraestrelina);
		
	}
	
	else if(opcao==3){
		dolaramericano= valor/3.85;
		printf("O valor do Dolar americano= %2.f", dolaramericano);
		
	}
	
	else if(opcao==4){
		marcoalemao= valor/1.95;
		printf("O valor do marco alemao= %2.f", marcoalemao);
		
	}
}


