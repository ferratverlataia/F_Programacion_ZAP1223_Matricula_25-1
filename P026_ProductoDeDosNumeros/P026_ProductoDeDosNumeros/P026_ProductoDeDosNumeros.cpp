#include <iostream>
float producto(float valor1, float valor2)
{
	if (valor2 == 0)
	{
		return 0;
	}
	else
	{
		return valor1 + producto(valor1, valor2 - 1);
	
	}
}

int main()
{
	float valor1, valor2;

	std::cout << "Bienvenido al calculador de productos: " << std::endl;
	std::cout << "cual es el valor 1? " << std::endl;
	std::cin >> valor1;
	std::cout << "Cual es el valor 2?" << std::endl;
	std::cin >> valor2;
	std::cout << "El resultado es: " << producto(valor1, valor2);
}