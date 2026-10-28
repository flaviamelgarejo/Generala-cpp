#include <iostream>
#include <string>
#include <ctime>
#include "OpcionesdelMenu.h"
#include "jugarRonda.h"
#include "rlutil.h"
#include "Recuadro.h"
#include "puntosRecord.h"
#include "EntreTurnos.h"

using namespace std;


void DosJugadores(int &maxPuntaje, string &maxJugador) {

system("cls");

		cout<<" --- MODO 2 JUGADORES ---"<<endl<<endl;
		cout<<"Ingrese el nombre del primer jugador: ";
    string nombreJugador1;
    cin>> nombreJugador1;
    cout<<endl;
cout<<"Ingrese el nombre del segundo jugador: ";
    string nombreJugador2;
    cin>> nombreJugador2;
    cout<<endl;

    int ronda = 1;
    int puntajeTotal1 = 0;
    int puntajeTotal2 = 0;
    const int maxRondas = 10;

    int puntosRonda;

    while (ronda <= maxRondas) {

        // Turno jugador 1
        system("cls");
        puntosRonda = jugarRonda(nombreJugador1, ronda, puntajeTotal1);
        puntajeTotal1 += puntosRonda;

        // Turno jugador 2
        system("cls");
        puntosRonda = jugarRonda(nombreJugador2, ronda, puntajeTotal2);
        puntajeTotal2 += puntosRonda;

        mostrarEntreTurnos(ronda,nombreJugador1,nombreJugador1, puntajeTotal1,nombreJugador2, puntajeTotal2);
        ronda++;

    }

    // Mostrar resultados finales
    system("cls");
    dibujarRecuadro(30, 6, 60, 12);

    rlutil::locate(50, 8);
    cout << "FIN DE LA PARTIDA";

    rlutil::locate(38, 10);
    cout << nombreJugador1 << " - Puntaje: " << puntajeTotal1;

    rlutil::locate(38, 11);
    cout << nombreJugador2 << " - Puntaje: " << puntajeTotal2;

    // Ganador
    rlutil::locate(38, 13);
    if (puntajeTotal1 > puntajeTotal2) {
        cout << "GANADOR: " << nombreJugador1;
        nuevoRecord(nombreJugador1, puntajeTotal1, maxPuntaje, maxJugador);
    }
    else if (puntajeTotal2 > puntajeTotal1) {
        cout << "GANADOR: " << nombreJugador2;
        nuevoRecord(nombreJugador2, puntajeTotal2, maxPuntaje, maxJugador);
    }
    else {
        cout << "EMPATE PERFECTO!";
    }
rlutil::locate(38, 15);
    cout << "Presione cualquier tecla para continuar...";
    rlutil::anykey();    // Espera que el jugador toque algo

    system("cls");
}
