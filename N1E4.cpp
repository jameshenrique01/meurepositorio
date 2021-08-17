//4) Escreva um programa em C++ para determinar se um dado número N (recebido através do teclado) é POSITIVO, NEGATIVO ou NULO. 

#include <iostream>

int main () {
	
	int numero = 0;
	std::cout << "Digite um numero: ";
	std::cin  >> numero;
	
	if (numero > 0) {
		std::cout << "Este e um numero positivo";
	}
	else if (numero < 0) {
		std::cout << "Este e um numero negativo";
	}
	else {
		std::cout << "Este e um numero nulo";
	}
	
	return 0;
}
