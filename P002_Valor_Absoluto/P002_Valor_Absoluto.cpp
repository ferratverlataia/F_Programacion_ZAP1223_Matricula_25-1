//Creado por ivan Ferrat zap_1223
//P002_Valor_Absoluto
//este programa nos permitira meter cualquier valor de tipo flotante  y obtener su valor absoluto
#include <iostream>

int main() 
{
	float entero;
	
	std::cout << "bienvenido al encontrador del valor absoluto de un decimal" << std::endl;
	std::cout << "porfavor introduzca un valor decimal" << std::endl;
	std::cin >> entero;

	bool esnegativo = entero < 0;

	if (esnegativo)
	{
		entero *= -1;
	}

	std::cout << "el valor absoluto del valor introducido es: " << entero << std::endl;
	return 0;
}