#include <iostream>

int MCD(int a, int b) 
{
	if (b == 0) return a;

	return MCD(b, a % b);
}

int main() 
{
	int a, b;
	
	std::cout << "porfavor introduzca el primer valor "<<std::endl;
	std::cin >> a;
	std::cout << "porfavor introduzca el segundo valor " << std::endl;
	std::cin >> b;

	std::cout << "El minimo Comun Divisor es: "<<MCD(a,b) << std::endl;
}