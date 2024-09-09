#include <iostream>
#include <cmath>

int main(){
    double numero;

    std::cout << "Digite um  numero: "; 
    std::cin >> numero;

    double quadrado = pow(numero, 2);
    double raizQuadrada = pow (numero, 0.5);

    if(numero < 0){
        std::cout << "Erro: Não é possível calcular a raiz quadrada de um número negativo." << std::endl;
    } 
    else{
        std::cout << "Numero: " << numero << std::endl;
        std::cout << "Quadrado: " << quadrado << std::endl;
        std::cout << "Raiz quadrada: " << raizQuadrada << std::endl;  
    }
}