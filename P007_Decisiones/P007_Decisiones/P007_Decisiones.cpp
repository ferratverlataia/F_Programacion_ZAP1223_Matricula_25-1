#include <iostream>
#include <cmath>
int main() 
{
	std::cout << "bienvenido al simulador de batallas" << std::endl;
	int numerodepeleadores,tipodepelea;
	float grupos,peleas;
	while (true) 
	{
		std::cout << "introduzca el numero de peleadores" << std::endl;
		std::cin >> numerodepeleadores;
		if (numerodepeleadores > 0) break;
		std::cout << "numero invalido de peleadores" << std::endl;
	}
	std::cout << "introduzca el tipo de pelea deseado" << std::endl;
	std::cout << "1.- Royal Rumble 2.- Eliminatoria directa 3.-(tiene que ser mas de 8 )Grupos, semifinal y final" << std::endl;
	std::cin >> tipodepelea;

	switch (tipodepelea)
	{
	case 1:
	case 2:
		std::cout << numerodepeleadores - 1 <<" peleas" << std::endl;
		break;
	case 3:
		if (numerodepeleadores < 8) 
		{
			std::cout << "jijoles no, son los suficientes luchadores" << std::endl;
			break;
		}
		 grupos =ceil(numerodepeleadores / 4.f);
		 peleas = (grupos * 6) + (grupos * 2 - 1);
		std::cout << peleas<<" peleas" << std::endl;
		break;
	default:
		std::cout << "no tenemos de ese =(" << std::endl;
		break;
	}
}