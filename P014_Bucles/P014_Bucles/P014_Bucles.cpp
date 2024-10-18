#include <iostream>
#include <stdio.h> 
#include <chrono>
#include <thread>

int main() 
{
	std::cout << "while" << std::endl;
	int contador = 1000;

	while (contador > 0)
	
	{
		std::cout << contador << std::endl;
		contador--;
	}
	 contador = 1000;
	 std::cout << "do while" << std::endl;

do
{
		std::cout << contador << std::endl;
		contador--;
} while (contador > 0);

std::cout << "for" << std::endl;
	for (int i = 1000; i > 0; i--)
	{
		std::cout << i  << std::endl;
		
	}
	std::cout << "for lento" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << i + 1 << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));

	}
	std::cout << "10x10" << std::endl;
	for (int i = 0; i < 100; i+=10)
	{
		for (int z = 0; z < 10; z++)
		{
			std::cout << i+z+1<<",";
		
		}
		std::cout << std::endl;
	}
}

