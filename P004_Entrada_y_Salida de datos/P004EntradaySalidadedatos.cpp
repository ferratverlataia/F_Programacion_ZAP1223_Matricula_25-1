// P004 Entrada y Salida de datos.
// Creado por Ivan ferrat
// este Programa es un consultorio medico de las farmacias simi
#include <iostream>
#include <locale>
#include <string>

int main()
{
	setlocale(LC_ALL, "en-US");
	char GeneroUsuario;
	std::string ComentarioUsuario;
	std::string nombreUsuario;
	bool compropeluchesimi;
	bool QuieroUnaBolsa;
	bool imprimirticket;
	int NumerodePeluches;
	int peso;
	float altura;
	float IMC;
	std::cout << "Benvenido a el consultorio de farmacias simi " << std::endl;
	std::cout << "¿cual es tu nombre?" << std::endl;
	std::getline(std::cin, nombreUsuario);
	
	std::cout << "cual es tu genero m:mujer o h:hombre" << std::endl;
	std::cin >> GeneroUsuario;
	
	std::cout << "Antes de empezar, ¿deseas llevarte tu simi edicion especial amerike? (1 si 0 no) " << std::endl;
	std::cin >> compropeluchesimi;

	if (compropeluchesimi) 
	{
		std::cout << "perfecto " << std::endl;
		std::cout << "cuantos peluches desea llevarse" << std::endl;
		
		std::cin >> NumerodePeluches;
		std::cout << "Desea agregar una bolsa para sus peluches ?" << std::endl;
		std::cout << "(1 si 0 no)" << std::endl;
		
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
	
	std::cout << "¿cual es su peso?" << std::endl;
	std::cin >> peso;
	
	std::cout << "¿cual es su altura?" << std::endl;
	std::cin >> altura;
	 IMC = (float)peso / (altura * altura);
	std::cout << "Perfecto su IMC es de: " << IMC << std::endl;

	std::cout << "¿Desea facturar?(1 si 0 no)"<<std::endl;
	bool quierofacturar;
	std::cin >> quierofacturar;
	if (quierofacturar)
	{
		std::cout << "claro, no mas fijese que no hay sistema hoy joven para facturar" << std::endl;
	}
	else 
	{
		std::cout << "Perfecto de todos modos no contabamos con sistema"<<std::endl;
	}
	std::cout << "quiere imprimir su ticket (1 si 0 no)?" << std::endl;
	
	std::cin >> imprimirticket;
	if (imprimirticket)
	{
		std::cout << "imprimiendo su ticket muchas gracias" << std::endl;
	}
	
	
	std::cout << "por ultimo podria escribir un comentario en el cual nos de su opinion del servicio?" << std::endl;
	
	std::cin.ignore();
	std::getline(std::cin, ComentarioUsuario);
	std::cout << "gracias por utilizar el consultorio medico portal del doctor simi" << std::endl;
	return 0;
}