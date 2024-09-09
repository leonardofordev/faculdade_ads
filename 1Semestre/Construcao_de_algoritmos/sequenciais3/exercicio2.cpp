#include <iostream>
#include <iomanip>

int main(){
	//definir preco fixo
	const double preco = 5.000;
	//criando duas variaveis;
	double largura, altura;

	std::cout << "Digite a altura do terreno em metros: ";
	std::cin >> altura;

	std::cout << "Digite a largura do terreno em metros: ";
	std::cin >> largura;

	//calcular a area
	double area = altura * largura;

	double precoMedio = area * preco;

	std::cout << std::fixed << std::setprecision(2);

	// mostrar o resulado

	std::cout << "====Dimensoes do terreno====" << std::endl;
	std::cout << "Largura: " << largura << " m " << std::endl;
	std::cout << "Altura: " << altura << " m " << std::endl; 
	std::cout << "area: " << area << " metros quadrado" <<std::endl;
	std::cout << "====Valores====" << std::endl;
	std::cout << "Preco medio: R$ " << precoMedio << std::endl;
	
	
	return 0;

	
}
