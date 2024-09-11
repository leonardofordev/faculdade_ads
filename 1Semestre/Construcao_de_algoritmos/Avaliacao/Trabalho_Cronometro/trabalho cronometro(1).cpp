#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <windows.h>

int main(){
	int cronometro[3];
	int tempsec;
	int x;
	
	for (x = 0; x < 3; x=x+1){
		
		if (x == 0){
			printf ("Digite um numero inteiro para informar os minutos ");
			scanf ("%i", &cronometro[x]);
			
		}else if (x == 1){
			printf ("igite um numero inteiro para informar o primeiro tempo dos segundos: ");
			scanf ("%i", &cronometro[x]);
	
		}else if (x = 2){
			printf ("Digite um numero inteiro para informar o segundo tempo dos segundos: ");
			scanf ("%i", &cronometro[x]);
		
		}
		tempsec = cronometro[1] * 10 + cronometro[2];
		if (tempsec == 0){
			tempsec=tempsec+1;
		}		
	}
	system("cls");
	while(cronometro[0] >= 0){
	tempsec--;
	printf("%im:%is", cronometro[0], tempsec);
	Sleep (999);
	system ("cls");
		if(tempsec == 0){
			tempsec = 60;
			cronometro[0]--;	
		}
	}
}

