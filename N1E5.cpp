//[--- NÍVEL 1 ---] 5) Construir um programa em C++ que leia dois números e efetue a adição. 
//Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; 
//caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.

#include <iostream>

int main () {
	
	int numero1 = 0;
	int numero2 = 0;
	std::cout << "Digite um numero aqui: ";
	std::cin  >> numero1;
	std::cout << "Digite outro numero aqui: ";
	std::cin  >> numero2;
	
	int numeroResultado = numero1+numero2;
	
	if (numeroResultado > 20) {
		std::cout << numeroResultado+8;
	}
	else {
		std::cout << numeroResultado - 5;
	}
	
} 
