#include <iostream>
#include <string>
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

void GetInput(std::string& value)
{
	std::string dummy;
	while (true)
	{
		std::getline(std::cin, dummy);

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "porfavor introduzca un valor valido" << std::endl;
		}
		else
		{

			value = dummy;
			std::cin.clear();

			return;
		}

	}
}


int main()
{
	bool HasCreatedAccount = false, ShouldExit = false;
	int StoredAge, Command;
	std::string StoredUserName, StoredPassword, StoredDescription, StoredCharactername;
	std::string UserName, Password;
	std::cout << "bienvenido al portal de Simifantasy MMORPG " << std::endl;
	while (!ShouldExit) {
		std::cout << "introduzca el comando que quiera realizar " << std::endl;
		std::cout << "1(LogIn 2(crear cuenta" << std::endl;
		GetInput(Command);
		switch (Command)
		{
		case 1:
			if (HasCreatedAccount)
			{
				std::cout << "Cual es su username?" << std::endl;
				GetInput(UserName);
				std::cout << "perfecto cual es su password" << std::endl;
				GetInput(Password);
				if (UserName == StoredUserName)
				{
					if (Password == StoredPassword)
					{

						std::cout << "perfecto a disfrutar simy adventures" << std::endl;
					}
					else
					{
						std::cout << "el password no es correcto" << std::endl;
					}
				}
				else
				{
					std::cout << "no hay ninguna cuenta llamada asi" << std::endl;
				}
			}
			else
			{
				std::cout << "porfavor, crea una cuenta" << std::endl;
			}
			break;
		case 2:
			std::cout << "Cual es su username?" << std::endl;
			GetInput(StoredUserName);
			std::cout << "perfecto cual es su password" << std::endl;
			GetInput(StoredPassword);
			std::cout << "perfecto cual es tu edad? " << std::endl;
			GetInput(StoredAge);
			std::cout << "perfecto cual es su descripcion" << std::endl;
			GetInput(StoredDescription);
			std::cout << "perfecto cual es su nombre del Simiavatar" << std::endl;
			GetInput(StoredCharactername);
			HasCreatedAccount = true;
			break;
		}
	}


}