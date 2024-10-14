//por: Ivan Ferrat Verlataia
//P009_Bucles
//este programa demuestra
//la utilizacion del 
//do while, while, for
#include <iostream>

int main() 
{
	bool condicionaldeprueba = true;
	int contador = 0,forrepeticion=0;
	std::cout << "el do se ejecuta una vez y comprueba la condicional del while" << std::endl;
	do
	{
		std::cout << "quieres que la condicional sea (1)verdadero o (0)falso ?" << std::endl;
		std::cin >> condicionaldeprueba; 
		contador++;
		std::cout << "el do while se a ejecutado: " << contador << std::endl;
	} while (condicionaldeprueba);

	
	condicionaldeprueba = true;
	std::cout << "el do while se a ejecutado un total de: " << contador << std::endl;
	std::cout << "quieres que la condicional sea (1)verdadero o (0)falso ?" << std::endl;
	std::cin >> condicionaldeprueba;

	contador = 0;
	
	while (condicionaldeprueba)
	{
		std::cout << "quieres que la condicional sea (1)verdadero o (0)falso ?" << std::endl;
		std::cin >> condicionaldeprueba;
		contador++;
		std::cout << "el while se a ejecutado: " << contador << std::endl;
	} 

	std::cout << "el while se a ejecutado un total de: " << contador << std::endl;
	
	std::cout << "cuantas veces quieres que el for se repita" << std::endl;
	std::cin >> forrepeticion;

	contador = 0;
	
	for (contador= 0; contador<forrepeticion; contador++)
	{
		std::cout << "el for se a ejecutado: " << contador+1 << std::endl;
	}

	std::cout << "el for se a ejecutado un total de: " << contador << std::endl;

}