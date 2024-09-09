#include <iostream>

int main(){
    int x; //declaracao de variavel
    
    std::cout <<"Digite um numero inteiro ";
    std::cin >>x;

    int sucessor = x + 1;
    int antecessor = x - 1;

    std::cout <<"O sucessor de " << x << " é " << sucessor << std::endl;
    std::cout <<"O antecessor de " << x << " é " << antecessor << std::endl;
}