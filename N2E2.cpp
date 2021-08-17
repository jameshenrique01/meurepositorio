#include <iostream>

int main () {
	
	int temperaturaC;
	std::cout << "Digite um numero: ";
	std::cin  >> temperaturaC;
	
	int temperaturaF = ( 9 * temperaturaC + 160) /5;
	std::cout << "Temperatura: " << temperaturaF << " Graus Farenheit";
	
	return 0;
}
