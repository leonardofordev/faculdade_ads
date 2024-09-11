#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	
	int moedas, marinheiro,capitao, NmoedasMarinheiro,Vmoeda;
	
	printf("Escreva o numero de moedas na arca: \n");
	scanf("%i", &moedas);
	
	printf("Escreva o numero de marinheiros: \n");
	scanf("%i", &marinheiro);
		
		
		//calculo
		
		NmoedasMarinheiro= moedas/(marinheiro +2) ;
		capitao= 2*NmoedasMarinheiro;
		Vmoeda= (moedas - capitao)/marinheiro;
		
		
		
		
		
		 
		
    printf("O valor que cada marinheiro recebera eh: %i \n", NmoedasMarinheiro);
    //printf("O capitao recebera o valor de %i moedas \n", capitao);
    
    printf("O capitao recebera: %i \n", capitao);
    
    if(capitao>= 120 ){
    	printf("O capitao conseguira realizar a manutencao do navio");
	}
	
	else{
		printf("O capitao nao conseguira realizar a manutencao do navio");
	}

	
}


