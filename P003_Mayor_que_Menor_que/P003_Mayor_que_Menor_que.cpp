//P003_Mayor_que_Menor_que
//Creador por Ivan Ferrat
// este programa compara
//dos valores los cuales 
//nos dice cual es mayor y cual es menor
#include <iostream>
int main() 
{
	int num1,num2;

	std::cout << "Bienvenido " << std::endl;
	std::cout << "este programa te dice el mayor y menor entre dos numeros" << std::endl;
	std::cout << "introduce el primer valor: " << std::endl;
	std::cin >> num1;
	std::cout << "introduce el segundo valor : " << std::endl;
	std::cin >> num2;

	if (num1 > num2) 
	{
		std::cout << "el valor numero 1: "<<num1<<" es mayor que el valor numero 2: "<<num2 << std::endl;
	}
	else if (num1 == num2) 
	{
		std::cout << "el valor numero 1: " << num1 << " es igual que el valor numero 2: " << num2 << std::endl;
	}
	else 
	{
		std::cout << "el valor numero 1: " << num1 << " e-s menor que el valor numero 2: " << num2 << std::endl;
	}

	return 0;
}