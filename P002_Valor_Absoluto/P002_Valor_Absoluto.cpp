//Creado por ivan Ferrat zap_1223
//P002_Valor_Absoluto
//este programa nos permitira meter cualquier valor de tipo flotante  y obtener su valor absoluto
#include <iostream>

int main() 
{
	float valor;
	
	std::cout << "bienvenido al encontrador del valor absoluto de un decimal" << std::endl;
	std::cout << "porfavor introduzca un valor decimal" << std::endl;

	while (1) {
		std::cin >> valor;
		if (!std::cin.fail()) break;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
			'\n');
		std::cout << "porfavor introduzca un valor valido" << std::endl;
	}

	bool esnegativo = valor < 0;
	
	if (esnegativo)
	{
		valor *= -1;
	}


	std::cout << "el valor absoluto del valor introducido es: " << valor << std::endl;
	return 0;
}