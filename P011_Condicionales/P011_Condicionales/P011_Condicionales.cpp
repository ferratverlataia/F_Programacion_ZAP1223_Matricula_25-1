#include <iostream>
#include <locale>

void GetInput(bool& value)
{
	bool dummy;
	while (true)
	{
		std::cin >> dummy;
		std::cin.ignore();
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "porfavor introduzca un valor valido" << std::endl;
		}
		else
		{
			if (dummy) 
			{
				value = dummy;
				return;
			}
			std::cout << "no tenemos un presupuesto para decir no" << std::endl;
			
		}
	}
}


int main()
{
	setlocale(LC_ALL, "en-US");

	bool respuesta;

	std::cout <<"Bienvenido a preguntados version de peliculas"<<std::endl;
	
	std::cout << "el programa solo cuenta con el presupuesto para 5 preguntas responda con 1(si 0(no" << std::endl;
	
	std::cout << "¿su pelicula es es de accion?" << std::endl;
	GetInput(respuesta);
	std::cout << "¿en su pelicula se encuentra Arnold Schwarzenegger? " << std::endl;
	GetInput(respuesta);
	std::cout << "¿es una pelicula de cienca ficcion ?" << std::endl;
	GetInput(respuesta);
	std::cout << "¿fue basada en un libro de philip K Dick?" << std::endl;
	GetInput(respuesta);
	std::cout << "¿la pelicula fue rodada en la Ciudad de mexico?" << std::endl;
	GetInput(respuesta);
	std::cout << "Perfecto, su pelicula es Total Recall" << std::endl;
}