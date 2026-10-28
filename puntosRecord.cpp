#include <iostream>
#include <string>
#include "puntosRecord.h"
using namespace std;



void mostrarRecord(int maxPuntaje, string maxJugador) {

    cout << "El puntaje mas alto es de: "<< endl << endl;
    cout << "-----------------------"<< endl;
    cout << "Nombre: " << maxJugador << endl;
    cout << "Puntuacion: " << maxPuntaje << endl;
    cout << "-----------------------"<< endl;
}


void nuevoRecord (string &nombreJugador, int puntajeTotal, int &maxPuntaje, string &maxJugador){

if (puntajeTotal > maxPuntaje){
       maxPuntaje = puntajeTotal;
       maxJugador = nombreJugador;
    }
}
