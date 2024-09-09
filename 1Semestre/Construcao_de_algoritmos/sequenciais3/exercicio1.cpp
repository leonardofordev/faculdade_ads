#include <iostream>
#include <iomanip> // Para manipulação de precisão

int main() {
    // Definir a quantidade de carne por hambúrguer em gramas
    const double carnePorHamburguerGramas = 200.0;

    // Variável para armazenar a quantidade de hambúrgueres
    int quantidadeHamburgueres;

    // Solicitar ao usuário a quantidade de hambúrgueres
    std::cout << "Digite a quantidade de hambúrgueres para o dia: ";
    std::cin >> quantidadeHamburgueres;

    // Calcular a quantidade total de carne necessária em gramas
    double totalCarneGramas = quantidadeHamburgueres * carnePorHamburguerGramas;

    // Converter a quantidade total de carne para quilos
    double totalCarneQuilos = totalCarneGramas / 1000.0;

    // Configurar a precisão para mostrar os valores com duas casas decimais
    std::cout << std::fixed << std::setprecision(2);

    // Exibir o resultado
    std::cout << "Quantidade de carne necessária: " << totalCarneQuilos << " quilos" << std::endl;

    return 0;
}
