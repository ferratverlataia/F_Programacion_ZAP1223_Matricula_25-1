// P001_Hola_Mundo_Zap1223
//Creado por Ivan Ferrat
//en este programa estamos haciendo un hola mundo y la actividad aule
#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "en-US");
	//soy un booleano
	bool SoyUnBool = true;
	//soy un entero
	int SoyUnInt = 10;
	//soy un caracter
	char SoyUnChar = 'a';
	//soy un doble
	double SoyUnDoble = 1000;
	//soy un flotante
	float soyUnFloat = 10.01f;
	//soy una cadena de caracteres
	std::string SoyUnString = "holaaaa";
	//soy un  arreglo de caracteres

	std::cout << "сссЅ" << std::endl;

	std::string EntradaDeTextoDeCadena;
	std::cout << "Porfavor ingresa una Cadena potente:" << std::endl;
	std::cin >> EntradaDeTextoDeCadena;

	bool EntradaDeTextoBooleano;
	std::cout << "Porfavor ingresa un Booleano potente (0 o 1):" << std::endl;
	std::cin >> EntradaDeTextoBooleano;

	int EntradaDeTextoEntero;
	std::cout << "Porfavor ingresa un Entero potente:" << std::endl;
	std::cin >> EntradaDeTextoEntero;

	char EntradaDeTextoCaracter;
	std::cout << "Porfavor ingresa un Caracter potente:" << std::endl;
	std::cin >> EntradaDeTextoCaracter;

	double EntradaDeTextoDoble;
	std::cout << "Porfavor ingresa un Doble potente:" << std::endl;
	std::cin >> EntradaDeTextoDoble;


	float EntradaDeTextoFlotante;
	std::cout << "Porfavor ingresa un Flotante potente:" << std::endl;
	std::cin >> EntradaDeTextoFlotante;

	char  EntradaDeTextoArregloCaracteres[100];
	std::cout << "Porfavor ingresa un Arreglo de caracteres:s" << std::endl;
	std::cin >> EntradaDeTextoArregloCaracteres;
	
	std::cout << "suma: " << 1 + 1<<std::endl;
	
	std::cout << "resta: " << 1 - 1 << std::endl;
	
	std::cout << "multiplicacion: " << 1 * 1 << std::endl;
	
	std::cout << "division: " << 1 / 1 << std::endl;
	
	std::cout << "raiz cuadrada: " << std::sqrt(4) << std::endl;
	
	std::cout << "potencia: " << std::pow(2,4) << std::endl;


	
	return 0;

}