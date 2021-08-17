#include <iostream>

int main () {
	
	float temperaturaC;
	std::cout << "Digite um numero em temperatura Celsius: ";
	std::cin  >> temperaturaC;
	
	float temperaturaK (temperaturaC + 273.15);
	std::cout << temperaturaK << " Graus Kelvin";
	
	return 0;
	
}
