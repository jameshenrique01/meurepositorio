#include <iostream>

int main () {
	
	float tempoViagem;
	float velocidade;
	
	std::cout << "Digite o tempo de viagem: ";
	std::cin  >> tempoViagem;
	
	std::cout << "Digite a velocidade: ";
	std::cin  >> velocidade;
	
	float distancia = tempoViagem * velocidade;
	float litrosUsados = distancia / 12;
	std::cout << "Distancia da viagem: "<< distancia << " Km \n";
	std::cout << "Litros usados na viagem: " << litrosUsados << "L";
	
	
	
	return 0;
	
}

