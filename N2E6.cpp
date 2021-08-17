#include <iostream>

int main () {
	
	int numero = 0;
	std::cout << "Digite qualquer numero inteiro positivo ou negativo: ";
	std::cin  >> numero;
	
	if (numero >=0 ){
		std::cout << numero;
	}
	else {
		std::cout << numero*-1;
	}
	
	return 0;
}
