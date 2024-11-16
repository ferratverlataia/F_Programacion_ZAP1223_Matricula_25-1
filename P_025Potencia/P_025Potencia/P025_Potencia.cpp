#include <iostream>
float potencia(float base, float exponente) 
{
	if (exponente == 0) 
	{
		return 1;
	}
	else if (exponente < 0) 
	{
		return potencia(base, exponente + 1) / base;
	}
	else 
	{
		return base * potencia(base, exponente - 1);
	}
}

int main() 
{
	float base,exponente;

	std::cout << "Bienvenido al buscador de potencias: " << std::endl;
	std::cout << "Que base quieres utilizar ? " << std::endl;
	std::cin >> base;
	std::cout << "Que exponente quieres utilizar" << std::endl;
	std::cin >> exponente;
	std::cout <<"El resultado es:" << potencia(base, exponente);
}