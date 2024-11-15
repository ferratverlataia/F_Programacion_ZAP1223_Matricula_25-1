#include <iostream>
#include <vector>

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


void  recDecBinario(int value, std::vector<int>& binary)
{
	
	binary.push_back(value % 2);
	if ((value / 2) > 0) 
	{
		recDecBinario(value / 2, binary);
	}
}

int main() 
{
	std::vector<int> binary = {};
	int decimal;

	std::cout << "porfavor introduzca el valor decimal al que quiera que convertamos" << std::endl;
	
	GetInput(decimal);

	recDecBinario(decimal,binary);

	std::cout << "El numero decimal convertido a binario es:";

	for (int i=binary.size()-1; i>=0; i--)
	{
		std::cout << binary.at(i);
	}

}

 