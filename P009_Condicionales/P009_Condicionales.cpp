#include <iostream>

int main() 
{
	int opcion,valor1,valor2;
	
	std::cout << "Bienvenido a la calculadora vs 0.0.01"<<std::endl;
	std::cout << "porfavor introduzca  el valor 1" << std::endl;
	std::cin >> valor1;
	std::cout << "porfavor introduzca  el valor 2" << std::endl;
	std::cin >> valor2;

	std::cout << "las opciones son: 1(suma),2(resta),3(multi),4(division),5(Valor Absoluto),6(mayor que menor que)" << std::endl;
	std::cin >> opcion;

	switch (opcion)
	{
	case 1:
		std::cout << "la suma de los dos valores es :" << valor1 + valor2 << std::endl;
		break;
	case 2:
		std::cout << "la resta de los dos valores es :" << valor1 - valor2 << std::endl;
		break;
	case 3:
		std::cout << "la multiplicacion de los dos valores es :" << valor1 * valor2 << std::endl;
		break;
	case 4:
		std::cout << "la division de los dos valores es: " << valor1 / valor2 << std::endl;
		break;
	case 5:
		std::cout << "el valor absoluto del valor1 es: " << abs(valor1) << std::endl;

		std::cout << "el valor absoluto del valor2 es: " << abs(valor2) << std::endl;
		break;
	case 6:
		if (valor1 > valor2)
		{
			std::cout << "el valor numero 1: " << valor1 << " es mayor que el valor numero 2: " << valor2 << std::endl;
		}
		else if (valor1 == valor2)
		{
			std::cout << "el valor numero 1: " << valor1 << " es igual que el valor numero 2: " << valor2 << std::endl;
		}
		else
		{
			std::cout << "el valor numero 1: " << valor1 << " es menor que el valor numero 2: " << valor2 << std::endl;
		}

		break;

	}


}