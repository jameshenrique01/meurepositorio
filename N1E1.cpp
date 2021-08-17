// [--- NÍVEL 1 ---]

// 1) Escreva um programa em C++ que leia um número e o imprima caso ele seja maior que 20. 

#include <iostream>

int main () {
	int numero = 0;
	
	std::cout << "Digite um numero maior que 20: ";
	std::cin  >> numero;
	
	if (numero > 20) { // utilizei a algebra booleana de forma errada
		std::cout << "Numero: " << numero;
	} 	else if (numero <= 20) {
		std::cout << "Errou, tenta denovo!!!";
	} 	else {
		std::cout << "Perdeu !! ";
	}
	return 0;
}
