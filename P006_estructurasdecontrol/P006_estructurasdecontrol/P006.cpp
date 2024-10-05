//P006 Repaso Entrada y Salida de datos / Estructuras de control
//Creado por ivan Ferrat
//un programa que contiene 5 desiciones sencillas
#include <iostream>
#include <string>
int main() 
{
	std::cout << "Welcome sir whats your name?"<<std::endl;
	std::string specialname= "Stranger";
	std::string username;
	std::getline(std::cin, username);
	if (specialname == username) 
	{
		std::cout << "hello Strangerrr!!!!!" << std::endl;
	}
	else 
	{
		std::cout << "I don t know who you are" << std::endl;
	}
	std::cout << "eres fan de chavo kart ?" << std::endl;

	bool soyfandechavo;
	std::cin >> soyfandechavo;

	if (soyfandechavo) 
	{
		std::cout << "uffers aqui esta tu copia del chavo kart hd" << std::endl;
	}
	else 
	{
		std::cout << "pipipipipipipipipi!!!!!" << std::endl;
	}
	std::cout << "te gusta el tequila? " << std::endl;
	bool tegustaeltequila;
	std::cin >> tegustaeltequila;

	if (tegustaeltequila)
	{
		std::cout << "aqui esta su tequila" << std::endl;
	}
	else
	{
		std::cout << "bueno no hay tequila para usted" << std::endl;
	}
	std::cout << "te gusta jugar videojuegos?" << std::endl;
	bool tegustalosvideojuegos;
	std::cin >> tegustalosvideojuegos;

	if (tegustalosvideojuegos)
	{
		std::cout << "worales, juega mexico 1921" << std::endl;
	}
	else
	{
		std::cout << "chales, podrias intentar con el breath of the wild" << std::endl;
	}

	std::cout << "cual es tu dificultad preferida del 0 al 3?" << std::endl;
	
	int dificultadelegida;
	std::cin >> dificultadelegida;
	switch (dificultadelegida) 
	{
	case 0:
		std::cout << "soy un cacahuate dificultad elegida" << std::endl;
		break;
	case 1:
		std::cout << "soy un niño de verdad dificultad elegida" << std::endl;
		break;
	case 2:
		std::cout << "soy un adulto responsable dificultad elegida" << std::endl;
		break;
	case 3:
		std::cout << "soy dios encarnado dificultad elegida" << std::endl;
		break;
	default:
		std::cout << "jijole joven el programador no tuvo timepo para implementarlo" << std::endl;
		break;
	}
}