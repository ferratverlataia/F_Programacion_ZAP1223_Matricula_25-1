#include <iostream>
float SumaDeNumerosNaturales(float valor1)
{
	if (valor1 == 0)
	{
		return 0;
	}
	else
	{
		return valor1 + SumaDeNumerosNaturales(valor1-1);

	}
}


int main()
{
	float valor1, valor2;

	std::cout << "Bienvenidoa la suma de numeros naturales" << std::endl;
	std::cout << "cual es el numero que quieres ver su suma completa ? " << std::endl;
	std::cin >> valor1;
	std::cout << "El resultado es: " << SumaDeNumerosNaturales(valor1);
}