	// [--- N�VEL 1 ---]
   // 2) Construa um programa em C++ que leia dois valores num�ricos inteiros e efetue a adi��o; caso o resultado seja maior que 10, apresent�-lo.

#include <iostream>

int main () {
	int numero1 = 0; //usei : em vez de =
	int numero2 = 0;
	
	std::cout << "Digite um numero: ";
	std::cin  >> numero1;
	std::cout << "Digite outro numero: ";
	std::cin  >> numero2;
	
	int numeroResultado = numero1+numero2;
	
	if (numeroResultado > 10) { 
		std::cout << "Numero: " << numeroResultado;
	}
	else {
		std::cout << "Errou tenta denovo!";
	}
   
	return 0;

}
