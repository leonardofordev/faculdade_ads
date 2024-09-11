#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 //O programa Jovem Aprendiz é lei no Brasil e incentiva a contratação de jovens sem experiência por empresas de médio e grande porte. 
 //Para ser contratado é necessário que o candidato tenha entre 14 e 24 anos e esteja cursando o ensino médio. Escreva um algoritmo que indique (apresente) 
 //se o candidato está apto ou não a participar do programa. 

int main()
{
	int idade, emedio;
	
	printf("Coloque a idade do candidato: \n");
	scanf("%i", &idade);
	
	if(idade>= 14 && idade <=24){
		printf("O candidato tem a idade suficiente para participar do programa. \n");
		printf("O candidato esta cursando o ensino medio ? digite '1' para SIM ou '2' Para NAO. \n");
		scanf("%i", &emedio);
		
		if( emedio==1){
			printf("O candidato tem a idade suficiente e esta cursando o ensino medio, \nportanto o mesmo pode participar do programa");
		}
		else{
			printf("O candidato tem a idade suficiente mas nao esta cursando o ensino medio, \nportanto o mesmo nao pode participar do programa");
		}
	}
	
	else{
		printf("O candidato nao tem a idade suficiente para participar do programa");
	}
		
}


