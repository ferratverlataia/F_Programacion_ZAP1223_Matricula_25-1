// P021_Battle_Royale.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <vector>
class Arma 
{
protected:
   
    int Fuerza;
    int multiplicador;
public:
    std::string nombre;
	int disparar()
	{
		return Fuerza * multiplicador;
	}
};

class Escopeta :public Arma 
{
public:
    Escopeta() 
    {
        nombre = "Escopeta";
        Fuerza = 10;
        multiplicador = 4;
    }

};

class Metralleta: public Arma
{
public:
    Metralleta() 
    {
        nombre = "Metralleta";
        Fuerza = 2;
        multiplicador = 9;
    }
	
};
class Minigun :public Arma
{
public:
    Minigun()
	{
        nombre = "Minigun";
		Fuerza = 2;
		multiplicador = 18;
	}
};

class Jugador 
{
protected:
  
	int velocidad;
	int CadenciadeTiro;
	int escudo;
    Arma* arma;
public:
    std::string nombre;
    int vida;

    Jugador(std::string nombrejugador) {
        nombre = nombrejugador;
        std::cout << nombrejugador << std::endl;
        velocidad = rand() % 10;
        CadenciadeTiro = rand() % 50;
        escudo = rand() % 50;
		vida = (rand() % 50)*escudo;
        int armacalculada = rand() % 3;
        switch (armacalculada)
        {
        case 1:
            arma = new Escopeta();
            break;
		case 2:
			arma = new Minigun();

			break;
        default:
            arma = new Metralleta();
            break;
        }
        
    }
 
    int CalcularTiro() 
    {
        return arma->disparar()+ CadenciadeTiro;
    }
	
    std::string mostrarNombredeArma() 
    {
        return arma->nombre ;
    }


    int damage(int amount) 
    {
        vida -= (amount-CadenciadeTiro);
        return amount;
    }
};


class Arena 
{
public:
    std::vector<Jugador> jugadores;
    Arena() 
    {
        jugadores.push_back(Jugador("ivanFerreterias"));
        jugadores.push_back(Jugador("jugador2"));
        jugadores.push_back(Jugador("jugador3"));
        jugadores.push_back(Jugador("jugador4"));
        jugadores.push_back(Jugador("jugador5"));
        jugadores.push_back(Jugador("jugador6"));
        jugadores.push_back(Jugador("jugador7"));
        jugadores.push_back(Jugador("jugador8"));
        jugadores.push_back(Jugador("jugador9"));
        jugadores.push_back(Jugador("jugador10"));
        jugadores.push_back(Jugador("jugador11"));
        jugadores.push_back(Jugador("jugador12"));
        jugadores.push_back(Jugador("jugador13"));
        jugadores.push_back(Jugador("jugador14"));
        jugadores.push_back(Jugador("jugador15"));
        jugadores.push_back(Jugador("jugador16"));
        jugadores.push_back(Jugador("jugador17"));
        jugadores.push_back(Jugador("jugador18"));
        jugadores.push_back(Jugador("jugador19"));
        jugadores.push_back(Jugador("jugador20"));

    }

    int MatchSize() 
    {
        return jugadores.size();
    }
    void ResolverDisputa() 
    {
        int jugadorSeleccionado  = rand() % (jugadores.size());
        int jugadorSeleccionado2 = rand() % (jugadores.size());
        while (jugadorSeleccionado == jugadorSeleccionado2) 
        {
            if (jugadores.size() == 2) 
            {
				jugadorSeleccionado = 0;
				jugadorSeleccionado2 = 1;
            }
            else {
            
				jugadorSeleccionado2 = rand() % (jugadores.size() - 1);
            }
        }

        std::cout << "los jugadores que pelean son: " << jugadores.at(jugadorSeleccionado2).nombre<<" y " << jugadores.at(jugadorSeleccionado).nombre << std::endl;
        std::cout << "el jugador: " << jugadores.at(jugadorSeleccionado).nombre << " con la arma: " 
            << jugadores.at(jugadorSeleccionado).mostrarNombredeArma() << " ataca al otro jugador con una letalidad de: "
            << jugadores.at(jugadorSeleccionado2).damage(jugadores.at(jugadorSeleccionado).CalcularTiro())
            << std::endl;
     
		if (jugadores.at(jugadorSeleccionado2).vida <= 0)
		{
            std::cout << "el jugador: " << jugadores.at(jugadorSeleccionado2).nombre << " se murio" << std::endl;
			jugadores.erase((jugadores.begin() + jugadorSeleccionado2));
			return;
		}
       
		std::cout << "el jugador: " << jugadores.at(jugadorSeleccionado2).nombre << " con la arma: "
			<< jugadores.at(jugadorSeleccionado2).mostrarNombredeArma() << " ataca al otro jugador con una letalidad de: "
			<< jugadores.at(jugadorSeleccionado).damage(jugadores.at(jugadorSeleccionado2).CalcularTiro())
			<< std::endl;

		if (jugadores.at(jugadorSeleccionado).vida <= 0)
		{

			std::cout << "el jugador: " << jugadores.at(jugadorSeleccionado).nombre << " se murio" << std::endl;
			jugadores.erase(jugadores.begin() + jugadorSeleccionado);
			return;
		}

    }
    void MostrarGanador() 
    {
        std::cout << "el ganador es: " << jugadores.at(0).nombre<< std::endl;
    }
};


int main()
{
    srand(time(0));
    std::cout << "Bienvenido al battle arena"<< std::endl;
    std::cout << "los participantes son: " << std::endl;
    Arena arena;
    while (arena.MatchSize()>1)
    {
        arena.ResolverDisputa();
    }

    arena.MostrarGanador();
}

