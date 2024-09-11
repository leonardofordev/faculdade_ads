#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	
 int  x,numeroCarteira, numeroMultas, contagem= 1, contagem2= 1, maiorCarteira= 0,  maiorMulta= 0, semMultas;
 float valorMulta, soma = 0, total = 0;
 char resposta[4];

 for(x = 0; x < 1000; x++){
 	
 	
//---------------Número da carteira de habilitação (CNH) com valores de 1 a 4327;-------------
   printf("Escreva o numero da carteira do motorista:\n");
   
   scanf("%i", &numeroCarteira);
   
     if(numeroCarteira< 1 || numeroCarteira> 4327){

       printf("Valor invalido.\n");
       
//-------g)Seu algoritmo deve ser encerrado quando o número da carteira de motorista informado for igual a 0----
       exit(0);

     }
     
//-------------Fim da primeira questão------------------------------//

//b)-----------Número de multas de cada motorista;----------------------//

   maiorCarteira = numeroCarteira;
   
   printf("Escreva o numero de multas:\n");

   scanf("%i", &numeroMultas);
   
     for(x = 0; x < numeroMultas; x++){
       printf("Escreva o valor da multa %i:\n", contagem++);
       scanf("%f", &valorMulta);
       soma = soma + valorMulta;
     }
 //--c)      Valor de cada multa---
     if(numeroMultas > maiorMulta){
       maiorMulta = numeroMultas;
       maiorCarteira = numeroCarteira;
     }
     else if (numeroMultas==0){
	semMultas=semMultas+1;
	
}


   total = total + soma;
   
 // --Deve ser calculado e apresentado o valor total da dívida para cada motorista;//
   printf("\nValor das multas do motorista %i(Carteira: %i): R$%.2f\n\n", contagem2++, numeroCarteira, soma);

   soma = 0;
   contagem = 1;

   printf("Deseja continuar? digite 's' para sim ou  'n' para nao: ");

   scanf("%s", &resposta);

     if(strcmp(resposta, "sim") == 0){

       printf("\n");

     }else{

       printf("\nSomatorio de todos os motoristas: R$%.2f\n", total);

       printf("Numero da carteira com mais multas: %i\n", maiorCarteira);
       
       printf("O total de Motorista sem multas: %i \n",semMultas);

       exit(0);

     }

 }


}


