#include <iostream>
int main() 
{
	std::cout << "bienvenido al simulador de batallas" << std::endl;
	int numerodepeleadores;
	
	while (true) 
	{
		std::cout << "introduzca el numero de peleadores" << std::endl;
		std::cin >> numerodepeleadores;
		if (numerodepeleadores > 0) break;
		std::cout << "numero invalido de peleadores" << std::endl;
	}
	std::cout << "introduzca el tipo de pelea deseado" << std::endl;
	std::cout << "1.- Royal Rumble 2.- Eliminatoria directa 3.- Grupos, semifinal y final" << std::endl;
	int tipodepelea;
	std::cin >> tipodepelea;
	float grupos;
	float peleas;
	switch (tipodepelea)
	{
	case 1:
	case 2:
		std::cout << numerodepeleadores - 1  << std::endl;
		break;
	case 3:
		 grupos = numerodepeleadores / 4;
		 peleas = (grupos * 6) + (grupos * 2 - 1);
		std::cout << peleas << std::endl;
		break;
	default:
		std::cout << "no tenemos de ese" << std::endl;
		break;
	}
}