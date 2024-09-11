#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
  int tabuada, contador;
  
  printf("Digite a tabuada desejada:\n");
  scanf("%i", &tabuada);
  
  //estrutura de repetição
  for(contador=0; contador<=10; contador= contador+1){
  	printf("%ix%i = %i \n", tabuada,contador, tabuada*contador);
  }
  
  
}


