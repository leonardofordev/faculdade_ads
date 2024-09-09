#include <iostream>

int main(){
	double valorProduto;

	std::cout << "Digite o valor do produto: ";
	std::cin >> valorProduto;	
	
	if (valorProduto < 0.0) {
		std::cout << " O valor nao pode ser negativo.";
	} else {
	
	double dinheiro = valorProduto * 0.10;
	double cartao = valorProduto * 0.50;

	std::cout << "Total = " << valorProduto << " R$ " << std::endl; 
	std::cout << "Desconto dinheiro = " << dinheiro << " R$ " << std::endl;
	std::cout << "Desconto cartao = " << cartao << " R$ " << std::endl;
	
	}
	
	return 0;

}
