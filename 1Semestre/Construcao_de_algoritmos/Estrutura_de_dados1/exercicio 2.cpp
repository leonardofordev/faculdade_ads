#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 //O programa Jovem Aprendiz � lei no Brasil e incentiva a contrata��o de jovens sem experi�ncia por empresas de m�dio e grande porte. 
 //Para ser contratado � necess�rio que o candidato tenha entre 14 e 24 anos e esteja cursando o ensino m�dio. Escreva um algoritmo que indique (apresente) 
 //se o candidato est� apto ou n�o a participar do programa. 

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


