#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	int idade, sexo, opiniao, x, opiniao1=0, opiniao2=0, opiniao3= 0, somaIdade= 0, contadormulher = 0, contadorhomem= 0;
	float media;
	
	for (x = 0; x <= 10; x=x+1){
		
		//idade
		printf ("Escreva a idade do espectador:\n");
		scanf ("%i", &idade);
		
		//sexo
		printf ("Escreva o sexo do espectador.\ndigite '1' para masculino\ndigite '2' para feminino\n");
		scanf("%i", &sexo);
		
		//opiniao
		printf("Escreva a opiniao do expectador em relacao ao filme.\ndigite '3' para excelente\ndigite '2' para bom\ndigite '1' para regular ");
		scanf ("%i", &opiniao);
		
		
		//provas
			if (opiniao == 1){
				opiniao1++;
			}else if (opiniao == 2){
				opiniao2++;
			}else if (opiniao == 3){
				opiniao3++;
			}
			
			//media sexo ''masculino''
			
			if (sexo == 1){
				contadorhomem++;
				somaIdade = somaIdade + idade;
				media = somaIdade / contadorhomem;
			}
			
			//contador feminino
			else if (sexo == 2){
				if (opiniao == 3 || opiniao == 2){
					contadormulher++;
				}			
			}			
		
	}
	

	//quantidade
	printf ("\nQunatidade de Regular:%i\n", opiniao1);
	printf ("Quantidade de Bom:%i\n", opiniao2);
	printf ("Quantidade de Excelente:%i\n", opiniao3);
	
	//opiniao predominante
	if (opiniao1 > opiniao3 && opiniao1 > opiniao2){
		printf("Opiniao mais repetida regular(1)");
		
	}else if(opiniao2 > opiniao3 && opiniao2 > opiniao1){
		printf("Opiniao mais repetida bom(2)");
		
	}else if(opiniao3 > opiniao2 && opiniao3> opiniao1){
		printf("Opiniao mais repetida excelente(3)");}
	
;
	//media idade das pessoas do sexo masculino
	printf ("\nMedia de idade dos Homens: %2.f \n", media);
	
	//total mulheres que responderam bom ou excelente
	printf ("\nTotal de mulheres que responderam 'Excelente' ou 'Bom':%i ",contadormulher);
	
}
