#include <iostream>
/*
 Escreva um algoritmo que leia 4 variáveis reais e imprima a média ponderada entre os valores, sabendo-se que os pesos são respectivamente 1, 2, 3 e 4.*/
int main(){
    double val1,val2,val3,val4, media;
  

    std::cout << "Digite a primeira nota: ";
    std::cin >> val1;

    std::cout << "Digite a segunda nota: ";
    std::cin >> val2;

    std::cout << "Digite a terceira nota: ";
    std::cin >> val3;

    std::cout << "Digite a quarta nota: ";
    std::cin >> val4;

    //calcular media 

    double soma_pesos = (val1 * 1) + (val2 * 2) + (val3 * 3) + (val4 * 4);
    double soma_pesos_totais = 1 + 2 + 3 + 4;
    media = soma_pesos / soma_pesos_totais;

    // imprimir
    std::cout << "Media: " << media << std::endl;




}