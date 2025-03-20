#include <stdio.h>

/*
Escreva um algoritmo que receba números enquanto eles forem pares e que, ao final, apresente a quantidade de números foram digitados.
*/
int main() {
    int num, quant = 0;

    printf("Digite um valor, caso o valor for impar o programa será encerrado:\n");

    // Leitura do primeiro número
    scanf("%d", &num);

    // Verifica se o número é par e continua pedindo números enquanto for par
    while (num % 2 == 0) {
        quant++;  // Incrementa a quantidade de números digitados
        scanf("%d", &num);  // Lê um novo número
    }

    // Quando o loop é quebrado, significa que o número é ímpar
    printf("Finalizando programa....\n");
    printf("Quantidade de numeros digitados: %d\n", quant);

    return 0;
}
