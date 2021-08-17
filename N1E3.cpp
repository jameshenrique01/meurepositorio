// [--- NÍVEL 1 ---]
// 3) Construa um programa em C++ que determine (imprima) se um dado número N inteiro (recebido através do teclado) é PAR ou ÍMPAR.

#include<iostream>

int main () {
	int numero = 0; //esqueci o = denovo!
	std::cout << "Digite qualquer numero: ";
	std::cin  >> numero;
	
	if (numero % 2==0) { 
		std::cout << "Numero Par";
	}	
	else {
		std::cout << "Numero Impar";
	}
	return 0;
}
