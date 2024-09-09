#include <iostream>
#include <cmath>

int main(){
	int primeiroTermo, razao;
	
	std::cout << "Digite a razao de uma PG: ";
	std::cin >> razao;
	
	std::cout << "Digite o primeiro termo da PG: ";
	std::cin >> primeiroTermo;

	int termoGeral = primeiroTermo * std::pow(razao, 7 -1);
	
	std::cout << "O setimo termo da serie eh:" << termoGeral << std::endl;


	return 0;
}
