#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


float totalPao,totalBroa,totalvendido, pao=0.25, broa=0.35, paoAtual, broaAtual;
int quantidadePao,quantidadeBroa;

 void Tabela(){
 	
 	totalPao=totalPao+paoAtual;
 	totalBroa=totalBroa+broaAtual;


	printf("Paos: %.2f R$ \n",totalPao);
	printf("Broas: %.2f R$ \n",totalBroa);

	totalvendido=totalvendido+paoAtual+broaAtual;

	printf("Total Vendido: %.2f R$\n",totalvendido);
	
	printf("quantidade de paes: %i \n",quantidadePao);
	printf("quantidade de broas: %i \n",quantidadeBroa);
	
	paoAtual=0.00;
	broaAtual=0.00;
}


void TabelaFinal(){
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

		printf("\n \nEnceramento do expediente: \n");
		printf("o total vendido: %.2f \n",totalvendido);
		printf("o custo de producao: %.2f \n",totalvendido*0.75);
		printf("Lucro : %.2f \n",totalvendido*0.25);
    	printf("Data e horario de fechamento de caixa: %i/%i/%i:%i:%i:%i\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour,tm.tm_min,tm.tm_sec);	
}

int main()
{
	int x=2,escolha,quantidade;
	bool fim=false;
		printf("Controle em tempo real e fechamento do caixa da padaria Padoca:\n\n");

		while(x!=0){
			if(fim==false){
			Tabela();
			}
			
			printf("\n \n1-Cadastrar Produto Vendido \n");
			printf("0-Sair do sistema \n");
			scanf("%i",&x);
			
			if(x<=1){
					
			if(x==1){
			 	printf("Qual produto foi vendido ? \n");
			 	printf("1-Pao \n");
			 	printf("2-Broa \n");
				scanf("%i",&escolha);
				
				if(escolha<=2 ){
					
					printf("Qual foi a quantidade vendida?\n");
					scanf("%i",&quantidade);
					
					if(quantidade >0){
					
					if(escolha==1){
						quantidadePao=quantidadePao+quantidade;
						paoAtual=paoAtual+(pao*quantidade);
						system("cls");
						
					}
					
					else if(escolha==2){
						quantidadeBroa=quantidadeBroa+quantidade;
						broaAtual=broaAtual+(broa*quantidade);
						system("cls");
						
					}
		     	}
		     	
		     	else if(quantidade<=0){
		     		system("cls");
		     		printf("Opcao inexistente \n");

				 }
				
			}
			else if(escolha<0 or escolha >=3){
					system("cls");
		     		printf("Opcao inexistente \n");
				 }
				
		}
			else if(x==0){
			system("cls");
			TabelaFinal();	
		}
		} 
		
	}
}
