#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Dona M�nica � m�e de tr�s filhos que t�m idades diferentes. Ela notou que, neste ano, a soma das idades dos seus tr�s filhos � igual � idade dela. 
Neste problema, dada � idade de dona M�nica e a idade de dois de seus tr�s filhos, seu programa deve computar e imprimir a idade do filho mais velho. 
Por exemplo, se sabemos que dona M�nica tem 52 anos e as idades conhecidas de dois dos seus filhos s�o 14 e 18 anos, ent�o a idade do outro filho, que n�o era conhecida, 
tem que ser 20 anos, pois a soma das tr�s idades tem que ser 52. Portanto, a idade do filho mais velho � 20. Em mais um exemplo, se dona M�nica tem 47 anos e as idades dos filhos s�o 21 e 9 anos,
 ent�o o outro filho tem que ter 17 anos e, portanto, a idade do mais velho � 21 anos.

 

Entrada: A primeira linha de entrada cont�m um inteiro M representando a idade de dona
M�nica. A segunda linha da entrada cont�m um inteiro A representando a idade de um dos filhos.
A terceira linha da entrada cont�m um inteiro B representando a idade do outro filho.
Sa�da: Seu programa deve imprimir uma linha, contendo um n�mero inteiro, representando a
idade do filho mais velho de dona M�nica.*/


int main()
{
	//informa�oes
	int M, A,B,C;
	//escreva e leia
	printf("Escreva a idade da Monica:\n");
	scanf("%i", &M);
	
	printf("Escreva a idade do filho A:\n");
	scanf("%i", &A);
	
	printf("Escreva a idade do filho B:\n");
	scanf("%i", &B);
	
	//conta
	C= M-(A+B);
	
	printf("\nA idade do terceiro filho e: %i \n", C);
	
	
	//RESOLU�AO
	if(B>C && B>A){
		printf("\n O filho mais velho eh o filho 'B' \n");
	}
	
	if(C>B && C>A){
		printf("O filho mais velho eh o filho 'C' \n");
	}
	
	else if(A>B && A>C){
		printf("O filho mais velho eh o filho 'A' \n");
	}
	
	
	
	
		
}


