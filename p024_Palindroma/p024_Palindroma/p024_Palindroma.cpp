#include <iostream>
#include <string>
#include <algorithm>

bool EsPalindroma(std::string pablara) 
{
	if (pablara.size() <= 1) return true;
	
	if (pablara.at(0) == pablara.at(pablara.size() - 1)) 
	{
		
		return  EsPalindroma(pablara.substr(1, pablara.size() - 2));
	}
	else 
	{
		return false;
	}
}



int main() 
{
	std::string palabra;
	
	
	std::cout << "que palabra quieres saber si es palindroma: ";

	std::getline(std::cin, palabra);


	std::transform(palabra.begin(), palabra.end(), palabra.begin(),
		[](unsigned char c) { return std::tolower(c); });
	
	if (EsPalindroma(palabra))
	{
		std::cout << "es palindroma" << std::endl;
	}
	else 
	{
		std::cout << " no es palindroma" << std::endl;
	}

}