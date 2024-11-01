// P016_Captura_de_Juegos.cpp 
// creador por: Ivan Ferrat Verlataia

#include <iostream>
#include <string>

const int size = 4;
int main()
{
	std::string Nombres[size] = { "Rayman 2","Age of Mythology","TIME CRISIS"};
	std::string publicacion [size] = { "1999","2002","1996"};
	std::string Autor[size] = { "Michel Ancel","Bruce Shelley","Takashi Sano"};
	std::string Estudio[size] = { "Ubisoft Montpellier"," Ensemble Studios","Namco"};

	for (int i = 0; i < size; i++) 
	{
		std::cout << "Numero de juego "<<i+1 << std::endl;
		std::cout << Nombres[i] << std::endl;
		std::cout << publicacion[i] << std::endl;
		std::cout << Autor[i] << std::endl;
		std::cout << Estudio[i] << std::endl;
		std::cout<<std::endl;
	}

	std::cout << "Dime un nombre de un juego perron"<<std::endl;
	std::getline(std::cin >> std::ws, Nombres[size-1]);
	std::cout << "Quien lo publico" << std::endl;
	std::getline(std::cin >> std::ws, publicacion[size - 1]);
	std::cout << "quien es el autor" << std::endl;
	std::getline(std::cin >> std::ws, Autor[size - 1]);
	std::cout << "quien es el Estudio que lo desarollo" << std::endl;
	std::getline(std::cin >> std::ws, Estudio[size - 1]);

	return 0;
}

