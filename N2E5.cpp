#include <iostream>

int main () {
	
	float temperaturaF;
	std::cout << "Digite um numero em temperatura Farenheit: ";
	std::cin  >> temperaturaF;
	
	float temperaturaC = ((temperaturaF - 32) * 5) / 9;
	std::cout << (temperaturaC + 273.15) << " Graus Kelvin";
	
	return 0;
	
}
