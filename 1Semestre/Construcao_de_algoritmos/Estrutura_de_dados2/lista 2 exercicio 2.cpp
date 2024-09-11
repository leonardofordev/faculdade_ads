#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>




int main()
{
	int idade;
	
	//escreva
	printf("Escreva a idade do jogador para descobrir a categoria segundo a tabela\n");
	//leia
	scanf("%i", &idade);
	
	if(idade >=5 && idade <=7 ){
		printf("Infantil A.");
	}
	
	else if(idade >=8 && idade <=10){
		printf("Infantil B.");
	}
	
	else if(idade >=11 && idade <=13){
		printf("Juvenil A.");
	}
	
    else if(idade >=14 && idade <=17){
    	printf("Juvenil B.");
	}
	
	else{
		printf("Adulto");
	}
	
	
	
	
		
}


