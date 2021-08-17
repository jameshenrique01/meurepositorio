#include <iostream>

int main () {
	
	int temperaturaF;
	std::cout <<"Digite um numero em Farenheit: ";
	std::cin  >> temperaturaF;
	
	int temperaturaC = ((temperaturaF - 32) * 5) / 9;
	std::cout << temperaturaC <<" Graus Celsius ";
}
