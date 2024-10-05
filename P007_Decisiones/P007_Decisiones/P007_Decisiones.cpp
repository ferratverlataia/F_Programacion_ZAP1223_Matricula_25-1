#include <iostream>
int main() 
{
	std::cout << "bienvenido al simulador de batallas" << std::endl;
	int numerodepeleadores;
	std::cout << "introduzca el numero de peleadores" << std::endl;
	std::cin >> numerodepeleadores;
	std::cout << "introduzca el tipo de pelea deseado" << std::endl;
	std::cout << "1.- Royal Rumble 2.- Eliminatoria directa 3.- Grupos, semifinal y final" << std::endl;
	int tipodepelea;
	std::cin >> tipodepelea;
	switch (tipodepelea)
	{
	case 1:
		std::cout << "1 pelea" << std::endl;
		break;
	case 2:
	case 3:
		std::cout << numerodepeleadores - 1<<" peleas" << std::endl;
		break;
	default:
		std::cout << "jijole no soportamos ese tipo de pelea" << std::endl;
		break;
	}
}