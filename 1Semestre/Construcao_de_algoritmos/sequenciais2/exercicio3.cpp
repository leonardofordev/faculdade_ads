#include <iostream>

int main(){
	double temperaturaCelsius;

	std::cout << "Digite a temperatura em Celsius: ";
	std::cin  >> temperaturaCelsius;

	double conversaoFahrenheit = (9 * temperaturaCelsius + 160) / 5;
	
	std::cout << "Temperatura Celsius: " << temperaturaCelsius << " C " <<std::endl ;
	std::cout << "Temperatura Fahrenheit: " << conversaoFahrenheit << " F " << std::endl;

	return 0; 

}
