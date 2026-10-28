#include <iostream>
using namespace std;
#include "Puntaje.h"

void contarCarasDeDados (const int dados[5], int caras[6]) {

        for (int i = 0; i < 6; i++){
            caras[i] = 0;
        }

        for (int i = 0; i < 5; i++){
            int valor = dados[i];
                caras[valor-1]++;
            }
}

// ----------------------------------------------------------
// JUGADAS:
bool esGenerala(int caras[6]){            // Valida Generala (5 caras iguales)
    for(int i = 0; i < 6; i++){
        if(caras[i] == 5){
            return true;
        }
    }
    return false;
}

bool esPoker(int caras[6]){               // Valida Poker (4 caras iguales)
    for(int i = 0; i < 6; i++){
        if(caras[i] == 4){
            return true;
        }
    }
    return false;
}

bool esFull(int caras[6]){               // Valida Full (3 iguales y 2 iguales)
    bool hayTres = false;
    bool hayPar  = false;

    for (int i = 0; i < 6; i++){
        if(caras[i] == 3){
            hayTres = true;
        }
        if(caras[i] == 2){
            hayPar = true;
        }
    }

    if(hayTres==true && hayPar==true){
        return true;
    }
    return false;
}


bool esEscalera(int caras[6]){           // Valida Escalera
    bool escalera1 = true;                        // Caso escalera1: valores 1..5  → caras[0..4] deben ser 1
    for (int i = 0; i <= 4; i++){
        if (caras[i] != 1) {
            escalera1 = false;
        }
    }

    bool escalera2 = true;                         // Caso escalera2: valores 2..6  → caras[1..5] deben ser 1
    for (int i = 1; i <= 5; i++){
        if (caras[i] != 1) {
            escalera2 = false;
        }
    }

    if (escalera1==true || escalera2==true){
        return true;
    }
    return false;
}

// JUEGO SIMPLE (1..6) Y DETERMINA EL MAYOR PUNTAJE COMO MEJOR
int puntajeCombinacionesSimples(int caras[6]) {
    int mejor = 0;

    for(int i = 0; i < 6; i++){
         int valor  = i + 1;
         int puntos = valor * caras[i];
         if (puntos > mejor){
            mejor = puntos;
        }
    }
    return mejor;
}
// COMPARACION DE JUGADAS DETERMINA LA MEJOR
int puntajeFinalDeJugada(int caras[6], int mejor){

    if(esEscalera(caras)==true && 25 > mejor){
        mejor = 25;
    }
    else if(esFull(caras)==true && 30 > mejor){
        mejor = 30;
    }
    else if(esPoker(caras)==true && 40 > mejor){
        mejor = 40;
    }
    else if(esGenerala(caras)==true && 50 > mejor){
        mejor = 50;
    }

    return mejor;
}
