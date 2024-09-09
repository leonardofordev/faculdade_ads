#include <iostream>

int main(){
    int dividendo, divisor;

    std::cout << "Digite o dividendo: ";
    std::cin >> dividendo;

    std::cout << "Digite o divisor: ";
    std::cin >> divisor;

    if (divisor == 0){
        std::cout << "Divisor não pode ser zero. " << std::endl;
        return 1;
    }

    int quociente = dividendo / divisor;
    int resto = dividendo % divisor ;

    std::cout << "Dividendo = " << dividendo << std::endl;
    std::cout << "Divisor = " << divisor << std::endl;
    std::cout << "Quociente = " << quociente << std::endl;
    std::cout << "Resto = " << resto << std::endl;

    return 0; 
}