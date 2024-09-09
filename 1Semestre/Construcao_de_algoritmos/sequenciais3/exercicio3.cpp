#include <iostream>
#include <iomanip>

int main(){
	//deifinicaoo da taxa de conversao
	const double cotacaoDolar = 5.31;
	const double aliquotaAtual = 0.60;
	const double aliquotaAtualizada = 0.30;

	//variavel para armazenar o valor da compra
	double valorCompraDolar;

	// solicitar ao usuario o valor da compra em Dolar
	std::cout << "Digite o valor da compra em dolares: ";
	std::cin >> valorCompraDolar;

	double valorCompraReais = valorCompraDolar * cotacaoDolar;
	double valorAliquotaAtual = valorCompraReais * aliquotaAtual;
	double valorAliquotaAtualizada = valorCompraReais * aliquotaAtualizada;
	
	std::cout << std::fixed << std::setprecision(2);

	std::cout << "Valor da compra em reais: R$ " << valorCompraReais << std::endl;
	std::cout << "Valor da aliquota atual (60%): R$ " << valorAliquotaAtual << std::endl;
	std::cout << "Valor da aliquota atualizada (30%): R$ " << valorAliquotaAtualizada << std::endl;


}
