#include <iostream>
#include <string>
#include <ctime>
using namespace std;
#include "OpcionesdelMenu.h"
#include "jugarRonda.h"
#include "rlutil.h"
#include "Recuadro.h"
#include "puntosRecord.h"


// Jugar 1 jugador
void jugarSolo(int &maxPuntaje, string &maxJugador){

cout<<" ------ MODO 1 JUGADOR -------"<<endl<<endl;

cout<<"Ingrese nombre del jugador: ";
    string nombreJugador;
    cin>> nombreJugador;
    cout<<endl;

    int ronda = 1;
    int puntajeTotal = 0;
    int puntosRonda = 0;

    system("cls");

    const int maxRondas = 10;

    do {
        system("cls");

        puntosRonda = jugarRonda(nombreJugador, ronda, puntajeTotal);
        puntajeTotal += puntosRonda;
        ronda++;

    } while (ronda <= maxRondas && puntosRonda != 250);
    system("cls");
    dibujarRecuadro(30, 6, 60, 10);

rlutil::locate(53, 8);
cout << "FIN DE LA PARTIDA";

rlutil::locate(38, 10);
cout << "Jugador: " << nombreJugador;

rlutil::locate(38, 11);
cout << "Rondas jugadas: " << maxRondas;

rlutil::locate(38, 12);
cout << "Puntaje total: " << puntajeTotal;



nuevoRecord(nombreJugador, puntajeTotal,maxPuntaje,maxJugador);

    system("pause>nul");


    system("cls");

}
