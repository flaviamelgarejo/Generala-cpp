#include <iostream>
#include "rlutil.h"
#include "Recuadro.h"

using namespace std;

void dibujarRecuadro(int x, int y, int ancho, int alto){

    // ---- Líneas horizontales ----
    for(int i = x; i <= x + ancho; i++){
        rlutil::locate(i, y);
        cout << '-';   // línea superior

        rlutil::locate(i, y + alto);
        cout << '-';   // línea inferior
    }

    // ---- Líneas verticales ----
    for(int j = y; j <= y + alto; j++){
        rlutil::locate(x, j);
        cout << '|';   // lateral izquierdo

        rlutil::locate(x + ancho, j);
        cout << '|';   // lateral derecho
    }

    // ---- Esquinas ----
    rlutil::locate(x, y);               cout << '+';
    rlutil::locate(x + ancho, y);       cout << '+';
    rlutil::locate(x, y + alto);        cout << '+';
    rlutil::locate(x + ancho, y + alto);cout << '+';
}
