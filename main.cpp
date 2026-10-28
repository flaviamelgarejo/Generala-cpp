#include <iostream>
#include <ctime>
#include "OpcionesdelMenu.h"
#include "rlutil.h"


using namespace std;

int main() {
rlutil::setBackgroundColor(rlutil::LIGHTRED);
    srand(time(0));

		int MenuPrincipal;
		int maxPuntaje = 0;
    string maxJugador = "Nadie";


		do{
			system("cls");//borra la pantalla
        cout <<endl;
        cout <<"  =========={ BIENVENIDO A GENERALA }=========="<<endl;
        cout <<endl;
        cout <<"  ---------- MENU PRINCIPAL ----------"<<endl;
        cout <<endl;
			cout<<" 1- JUEGO NUEVO | MODO UN JUGADOR"<<endl;
			cout<<endl;
			cout<<" 2- JUEGO NUEVO | MODO DOS JUGADORES"<<endl;
			cout<<endl;
			cout<<" 3- CREDITOS "<<endl;
			cout<<endl;
			cout<<" 4- PUNTUACION MAS ALTA"<<endl;
			cout<<endl;
			cout<<" 0- SALIR"<<endl;
			cout<<endl;

			OpcionesdelMenu(MenuPrincipal,maxPuntaje, maxJugador);
        }
		while(MenuPrincipal!=0);
    return 0;
}
