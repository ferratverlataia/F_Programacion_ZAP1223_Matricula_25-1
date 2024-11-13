// P018_Punteros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstdlib>
void GetInput(int& value)
{
	int dummy;
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
			value = dummy;
			return;
		}
	}
}

int main()
{
	srand(time(0));

	const int maxallowed=3;
	int n, m;
	int** matrix;

	std::cout << "Bienvenido al sistema de matrices dinamico" << std::endl;
	std::cout << "porfavor introduzca un tamaño de filas" << std::endl;
	GetInput(n);
	std::cout << "porfavor introduzca un tamaño de colummnas" << std::endl;
	GetInput(m);
	matrix = new int* [n];

	for (int i = 0; i < n;i++) 
	{
		matrix[i] = new int[m];
	}

	if (n > maxallowed || m > maxallowed)
	{
		for (int i = 0; i < n;i++)
		{
			for (int j = 0; j < m; j++) 
			{
				matrix[i][j] = rand() % 100;
			}
			
		}
	}
	else 
	{

	
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int temporal;
				std::cout << "Porfavor introduzca un valor en la fila: " << i + 1 << " columna: " << j + 1 << std::endl;
				GetInput(temporal);
				matrix[i][j] = temporal;
			}
		}
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int temporal;
			std::cout << "|" << matrix[i][j] << "|" ;
		}
		std::cout << std::endl;
	}
}
