#include <iostream>
#include "OpcionesdelMenu.h"


using namespace std;


void OpcionesdelMenu(int &MenuPrincipal, int &maxPuntaje, std::string &maxJugador) {


			cout<<" - ELIJA UNA OPCION: ";
			cin>>MenuPrincipal;
			cout<<endl;

			system("cls");

			switch(MenuPrincipal){

			case 1:
					jugarSolo(maxPuntaje, maxJugador);
			break;
			case 2:
					DosJugadores(maxPuntaje, maxJugador);
			break;
			case 3:
			    creditos();
			break;
			case 4:
			    mostrarRecord(maxPuntaje, maxJugador);

			break;
			case 0:
				cout<<"  GRACIAS POR JUGAR.."<<endl;
			break;


				}

				system("pause>nul");

			}


