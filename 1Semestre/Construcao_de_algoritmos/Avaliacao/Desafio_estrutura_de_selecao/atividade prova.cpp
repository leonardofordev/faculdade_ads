#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Dona Mônica é mãe de três filhos que têm idades diferentes. Ela notou que, neste ano, a soma das idades dos seus três filhos é igual à idade dela. 
Neste problema, dada à idade de dona Mônica e a idade de dois de seus três filhos, seu programa deve computar e imprimir a idade do filho mais velho. 
Por exemplo, se sabemos que dona Mônica tem 52 anos e as idades conhecidas de dois dos seus filhos são 14 e 18 anos, então a idade do outro filho, que não era conhecida, 
tem que ser 20 anos, pois a soma das três idades tem que ser 52. Portanto, a idade do filho mais velho é 20. Em mais um exemplo, se dona Mônica tem 47 anos e as idades dos filhos são 21 e 9 anos,
 então o outro filho tem que ter 17 anos e, portanto, a idade do mais velho é 21 anos.

 

Entrada: A primeira linha de entrada contém um inteiro M representando a idade de dona
Mônica. A segunda linha da entrada contém um inteiro A representando a idade de um dos filhos.
A terceira linha da entrada contém um inteiro B representando a idade do outro filho.
Saída: Seu programa deve imprimir uma linha, contendo um número inteiro, representando a
idade do filho mais velho de dona Mônica.*/


int main()
{
	//informaçoes
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
	
	
	//RESOLUÇAO
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


