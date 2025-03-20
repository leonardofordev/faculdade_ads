#include <stdio.h>

int main(){
    int num, qntDivisiveis = 0;  
    
    /*
    Escreva um algoritmo que receba vários números e indique quantos deles são divisíveis por 2 e 7.
    Seu algoritmo deve ser finalizado quando o usuário informar um número negativo.
    */

    printf("Digite varios valores, caso queira finalizar o programa digite um numero negativo: \n");
    
    do {
        scanf("%d", &num);  // Leitura do número dentro do loop

        // Verifica se o número é divisível por 2 e 7
        if (num >= 0 && num % 2 == 0 && num % 7 == 0) {
            qntDivisiveis++;
        }
    } while (num >= 0);  // Continua o loop enquanto o número for positivo

    // Exibe a quantidade de números divisíveis por 2 e 7
    printf("Quantidade de numeros divisiveis por 2 e 7: %d\n", qntDivisiveis);

    return 0;
}
