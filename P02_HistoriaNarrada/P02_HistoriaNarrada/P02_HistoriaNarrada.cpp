#include <iostream>
#include <cstdlib>
class Game 
{
public:
	bool isGameRunning;
	int option;
	void Initiliaze() 
	{
		isGameRunning = true;
	}
	void loop()
	{
		std::cout << "Te despiertas en bosque misterioso" << std::endl;
		std::cout << "en frente de ti hay una misteriosa figura " << std::endl;
		std::cout << "que quieres preguntarle a la figura?" << std::endl;
		std::cout << "1( quien eres" << std::endl;
		std::cout << "2( que eres" << std::endl;
		std::cout << "3( el autor de este programa no tiene originalidad propia ?" << std::endl;
		std::cout << "4( dime un chiste porfavor" << std::endl;
		std::cout << "default( ..." << std::endl;
		std::cin >> option;

		switch (option)
		{
		case 1:
			std::cout << "SOY TU PEORRR PESADILLA" << std::endl;
			std::cout << "SOY EL RECIBO DE LA LUZ" << std::endl;
			std::cout << "PERO MAS CARO" << std::endl;
			std::cout << "que haras ahora" << std::endl;
			std::cout << "1( ir a la CFE a pagar el recibo" << std::endl;
			std::cout << "2( ir al oxxo a pagar el servicio de la luz" << std::endl;
			std::cout << "3( comenzar la revolucion mexicana 2" << std::endl;
			std::cout << "4( esperar que se arregle solo" << std::endl;
			std::cout << "default( Usar la mousequeherramientamisteriosa" << std::endl;
			std::cin >> option;
				switch (option)
		{
		case 1:
			std::cout << "fuiste al cfe a pagar el recibo de luz" << std::endl;
			std::cout << "la cfe te dio una medalla para fecilitar tan gran acontecimiento" << std::endl;
			std::cout << "final: soy el heroe de la cfe" << std::endl;
			break;
		case 2:
			std::cout << "fuiste al oxxo a pagar el recibo" << std::endl;
			std::cout << "pero te encontraste al unico e inigualable canelo el cual te metio semejante paliza" << std::endl;
			std::cout << "eso te para por no ir al upper" << std::endl;
			std::cout << "final: Canelo me caneleo bien feo" << std::endl;
			break;
		case 3:
			std::cout << "Felicidades has derrocado al gobierno que se encuentra establecido en este momento" << std::endl;
			std::cout << "pero como todo buen heroe revolucionario te van a usar de martir" << std::endl;
			std::cout << "por eso deciden matarte" << std::endl;
			
			break;
		case 4:
			std::cout << "felicidades has logrado no hacer nada" << std::endl;
			std::cout << "como buen mexicano tomas la decision de no ponerte a cargo de tus problemas" << std::endl;
			std::cout << "pero tristemente te quitan la luz de tu propiedad" << std::endl;
			std::cout << "final: me cortaron la luz" << std::endl;

		default:
			std::cout << "La herramienta misteriosa es ........." << std::endl;
			std::cout << "final: La mouseque herramienta misteriosa" << std::endl;
			break;
		}

			break;
		case 2:
			std::cout << "soy un ser de oscuridad" << std::endl;
			std::cout << "ya colmaste la paciencia te voy a comer" << std::endl;
			std::cout << "final: moriste comido por el ser de oscuridad" << std::endl;

			break;
		case 3:
			std::cout << "No tiene originalidad propia en realidad" << std::endl;
			std::cout << "no mas se le ocurrio poner lo que le da mas miedo" << std::endl;
			std::cout << "y son" << std::endl;
			system("Pause");
			std::cout << "LOS IDEAAA MANNNNNN" << std::endl;
			system("Pause");
			std::cout << "fue tanto el terror que sentiste que tu personaje se murio" << std::endl;
			system("Pause");
			std::cout << "Final: a veces las ideas matan...." << std::endl;
			system("Pause");
			break;
		case 4:
			std::cout << "Cual es el videojuego mas triste ?" << std::endl;
			system("Pause");
			std::cout << "Tetris" << std::endl;
			system("Pause");
			std::cout << "No entendi ...." << std::endl;
			system("Pause");
			std::cout << "tetristetristetristetris" << std::endl;
			system("Pause");
			std::cout << "tu personaje se rie tanto que se muere" << std::endl;
			system("Pause");
			std::cout << "Final:me mori de la risa" << std::endl;
			system("Pause");
			break;
		default:
			std::cout << "... sabes que ya me voy buenas noches" << std::endl;
			std::cout << "final: ..." << std::endl;
			break;
		}
		system("Pause");
		system("cls");
		std::cout << "quieres terminarl el juego 0(si 1(no" << std::endl;
		std::cin >> isGameRunning;

	}

	
private:
	
};

int main() 
{
	Game game;
	game.Initiliaze();
	while (game.isGameRunning) 
	{
		game.loop();
	}
	return 0;

}