// P004 Entrada y Salida de datos.
// Creado por Ivan ferrat
// este Programa es un consultorio medico
#include <iostream>
#include <locale>
#include <string>

int main()
{
	setlocale(LC_ALL, "en-US");
	std::cout << "Benvenido a el consultorio de farmacias simi " << std::endl;
	std::cout << "¿cual es tu nombre?" << std::endl;
	std::string nombreUsuario;
	std::getline(std::cin, nombreUsuario);
	char GeneroUsuario;
	std::cout << "cual es tu genero m:mujer o h:hombre" << std::endl;
	std::cin >> GeneroUsuario;
	bool compropeluchesimi;
	std::cout << "Antes de empezar, ¿deseas llevarte tu simi edicion especial amerike? (1 si 0 no) " << std::endl;
	std::cin >> compropeluchesimi;

	if (compropeluchesimi) 
	{
		std::cout << "perfecto ya lo pusimos a tu cuenta" << std::endl;
		std::cout << "Desea agregar una bolsa ?" << std::endl;
		std::cout << "(1 si 0 no)" << std::endl;
		bool QuieroUnaBolsa;
		std::cin >> QuieroUnaBolsa;
		if (QuieroUnaBolsa) 
		{
			std::cout << "Perfecto le agregamos una bolsa" << std::endl;
		}
		else 
		{
			std::cout << "Perfecto, no hay ningun problema" << std::endl;
		}
	}
	else 
	{
		std::cout << "solo recuerda que es edicion limitada y ya no podria encontrase en cualquier momento" << std::endl;
	}
	int peso;
	std::cout << "¿cual es su peso?" << std::endl;
	std::cin >> peso;
	float altura;
	std::cout << "¿cual es su altura?" << std::endl;
	std::cin >> altura;
	float IMC = (float)peso / (altura * altura);
	std::cout << "Perfecto su IMC es de: " << IMC << std::endl;

	std::cout << "¿Desea facturar?(1 si 0 no)"<<std::endl;
	bool quierofacturar;
	if (quierofacturar)
	{
		std::cout << "claro, no mas fijese que no hay sistema hoy joven para facturar" << std::endl;
	}
	else 
	{
		std::cout << "Perfecto de todos modos no contabamos con sistema"<<std::endl;
	}
	return 0;
}