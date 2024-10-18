#include <iostream>
#include <stdio.h> 
#include <chrono>
#include <thread>
int main() 
{
	int vidas = 3;
	std::cout << "Tu teclado es maldito" << std::endl;
	std::cout << "tienes 3 vidas" << std::endl;
	std::cout << "si puchas cualquier tecla se te quitara una vida muajajaja" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(5000));
	system("cls");
	while (vidas > 0) 
	{
		std::cout << "tus vidas son:" << vidas << std::endl;
		std::cout << "presiona una tecla para MORIR" << std::endl;
		system("PAUSE");
		system("cls");
		std::cout << "Te quite una vida MUAJAJAJAJAAJAJAJ" << std::endl;
		system("color AF");
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		system("color CF");
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		system("color AF");
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		system("color 0F");
		system("cls");
		vidas--;
	}

	std::cout << "en honor a tu muerte vamos a contar hasta al 100" << std::endl;

	for (int i = 0; i < 100; i++)
	{
		std::cout << i+1 << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}

}