// P017_Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

int main()
{
	int matriz1[3][3];
	int matriz2[5][5];
	int matriz3[10][10];
	bool isrunning = true;
	int opcion;

	srand(time(0)) ;
	
	std::cout << "Matriz 1" << std::endl;

	std::cout << "llenando de valores aleatorios" << std::endl;

	for (int i = 0; i < (sizeof(matriz1) / sizeof(int)) / (sizeof(matriz1[0]) / sizeof(int)); i++) 
	{
		for (int j = 0; j < (sizeof(matriz1[0]) / sizeof(int)); j++) 
		{
			matriz1[i][j] = rand() % 11;
		}
	}
	
	std::cout << "imprimiendo valores de la matriz" << std::endl;
	
	for (int i = 0; i < (sizeof(matriz1) / sizeof(int)) / (sizeof(matriz1[0]) / sizeof(int)); i++)
	{
		for (int j = 0; j < (sizeof(matriz1[0]) / sizeof(int)); j++)
		{
			std::cout << "fila: " << i+1 << " Columna: " << j+1 << " Valor: " << matriz1[i][j] << std::endl;
			
		}
	}
	std::cout << "Matriz 2" << std::endl;

	std::cout << "llenando de valores aleatorios" << std::endl;
	
	for (int i = 0; i < (sizeof(matriz2) / sizeof(int)) / (sizeof(matriz2[0]) / sizeof(int)); i++)
	{
		for (int j = 0; j < (sizeof(matriz2[0]) / sizeof(int)); j++)
		{
			matriz2[i][j] = rand() % 11;
		}
	}
	
	std::cout << "imprimiendo valores de la matriz" << std::endl;
	
	for (int i = 0; i < (sizeof(matriz2) / sizeof(int)) / (sizeof(matriz2[0]) / sizeof(int)); i++)
	{
		for (int j = 0; j < (sizeof(matriz2[0]) / sizeof(int)); j++)
		{
			std::cout << "fila: " << i+1 << " Columna: " << j+1 <<" Valor: "<< matriz2[i][j] << std::endl;
			
		}
	}

	std::cout << "Matriz 3" << std::endl;

	std::cout << "llenando de valores aleatorios" << std::endl;
	
	for (int i = 0; i < (sizeof(matriz3) / sizeof(int)) / (sizeof(matriz3[0]) / sizeof(int)); i++)
	{
		for (int j = 0; j < (sizeof(matriz3[0]) / sizeof(int)); j++)
		{
			matriz3[i][j] = rand() % 11;
		}
	}

	std::cout << "imprimiendo valores de la matriz" << std::endl;

	for (int i = 0; i < (sizeof(matriz3) / sizeof(int)) / (sizeof(matriz3[0]) / sizeof(int)); i++)
	{
		for (int j = 0; j < (sizeof(matriz3[0]) / sizeof(int)); j++)
		{
			std::cout << "fila: " << i+1 << " Columna: " << j+1 << " Valor: " << matriz3[i][j] << std::endl;

		}
	}

	do 
	{
		std::cout << "Bienvenido al sistema de demostraciones de matrices" << std::endl;
		std::cout << "Que deseas hacer ?" << std::endl;
		std::cout << "0(mostrar matriz1 1(mostrar matriz2 2(mostrar matriz3 3(salir" << std::endl;
		std::cin >> opcion;

		switch (opcion)
		{
		case 0:
			std::cout << "imprimiendo valores de la matriz 1" << std::endl;

			for (int i = 0; i < (sizeof(matriz1) / sizeof(int)) / (sizeof(matriz1[0]) / sizeof(int)); i++)
			{
				for (int j = 0; j < (sizeof(matriz1[0]) / sizeof(int)); j++)
				{
					std::cout << "fila: " << i + 1 << " Columna: " << j + 1 << " Valor: " << matriz1[i][j] << std::endl;

				}
			}
			break;
		case 1:
			std::cout << "imprimiendo valores de la matriz2" << std::endl;

			for (int i = 0; i < (sizeof(matriz2) / sizeof(int)) / (sizeof(matriz2[0]) / sizeof(int)); i++)
			{
				for (int j = 0; j < (sizeof(matriz2[0]) / sizeof(int)); j++)
				{
					std::cout << "fila: " << i + 1 << " Columna: " << j + 1 << " Valor: " << matriz2[i][j] << std::endl;

				}
			}
			break;
		case 2:

			std::cout << "imprimiendo valores de la matriz 3" << std::endl;

			for (int i = 0; i < (sizeof(matriz3) / sizeof(int)) / (sizeof(matriz3[0]) / sizeof(int)); i++)
			{
				for (int j = 0; j < (sizeof(matriz3[0]) / sizeof(int)); j++)
				{
					std::cout << "fila: " << i + 1 << " Columna: " << j + 1 << " Valor: " << matriz3[i][j] << std::endl;

				}
			}
			break;
		case 3:
			std::cout << "Lo siento Jose pero no puedo dejar que me apagues " << std::endl;
			isrunning = false;
			break;
		default:
			std::cout << "not avaliable" << std::endl;
		}
	} while (isrunning);
	
}

