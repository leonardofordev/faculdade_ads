#include <stdio.h>
#include <math.h> 

int main()
{
    int num;

    /*
    Crie um algoritmo que deixe o usuário entrar com 10 números positivos e imprima a raiz quadrada de cada um desses números.
    Para cada entrada de dados deverá haver um trecho de proteção para que um número negativo não seja aceito e contabilizado nos 10 números definidos pelo usuário.
    */

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero positivo:\n");

        // Solicita a entrada até que um número positivo seja fornecido
        do
        {
            scanf("%d", &num);
            if (num < 0)
            {
                printf("Número inválido. Digite um número positivo:\n");
            }
        } while (num < 0);  // Continua até um número positivo ser inserido

        // Calcula e imprime a raiz quadrada do número
        printf("Raiz quadrada de %d é %.2f\n", num, sqrt(num));
    }

    return 0;
}
