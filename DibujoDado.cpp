#include <iostream>
#include "DibujoDado.h"
#include "rlutil.h"

using namespace std;

void dibujarCuadrado(int posx, int posy){
    rlutil::setColor(rlutil::WHITE);

    for (int x = posx; x <= posx + 6; x++){
        for (int y = posy; y <= posy + 2; y++){
            rlutil::locate(x, y);
            cout << (char)219;
        }
    }
}

void dibujarDado(int numero, int posx, int posy){

    dibujarCuadrado(posx, posy); // Primero dibuja el fondo del dado

    rlutil::setColor(rlutil::BLACK);// Puntos en negro
    rlutil::setBackgroundColor(rlutil::WHITE);// Fondo blanco

    switch(numero){

        case 1:
            rlutil::locate(posx + 3, posy + 1);
            cout << (char)254;
            break;

        case 2:
            rlutil::locate(posx + 1, posy);
            cout << (char)220;
            rlutil::locate(posx + 5, posy + 2);
            cout << (char)223;
            break;

        case 3:
            rlutil::locate(posx + 3, posy + 1);
            cout << (char)254;
            rlutil::locate(posx + 1, posy);
            cout << (char)220;
            rlutil::locate(posx + 5, posy + 2);
            cout << (char)223;
            break;

        case 4:
            rlutil::locate(posx + 1, posy);
            cout << (char)220;
            rlutil::locate(posx + 5, posy);
            cout << (char)220;
            rlutil::locate(posx + 1, posy + 2);
            cout << (char)223;
            rlutil::locate(posx + 5, posy + 2);
            cout << (char)223;
            break;

        case 5:
            rlutil::locate(posx + 3, posy + 1);
            cout << (char)254;
            rlutil::locate(posx + 1, posy);
            cout << (char)220;
            rlutil::locate(posx + 5, posy);
            cout << (char)220;
            rlutil::locate(posx + 1, posy + 2);
            cout << (char)223;
            rlutil::locate(posx + 5, posy + 2);
            cout << (char)223;
            break;

        case 6:
            rlutil::locate(posx + 1, posy);
            cout << (char)220;
            rlutil::locate(posx + 3, posy);
            cout << (char)220;
            rlutil::locate(posx + 5, posy);
            cout << (char)220;
            rlutil::locate(posx + 1, posy + 2);
            cout << (char)223;
            rlutil::locate(posx + 3, posy + 2);
            cout << (char)223;
            rlutil::locate(posx + 5, posy + 2);
            cout << (char)223;
            break;
    }
}
