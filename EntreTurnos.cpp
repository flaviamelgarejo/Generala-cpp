#include <iostream>
#include "EntreTurnos.h"
#include "rlutil.h"
#include "Recuadro.h"

using namespace std;

void mostrarEntreTurnos(int ronda, string proximoJugador,string nombre1, int puntaje1,string nombre2, int puntaje2)
{
    system("cls");

    // Dibuja un recuadro como el ejemplo
    dibujarRecuadro(20, 5, 70, 12);

    rlutil::locate(45, 7);
    cout << "RONDA N " << ronda;

    rlutil::locate(40, 9);
    cout << "PROXIMO TURNO: " << proximoJugador;

    rlutil::locate(35, 11);
    cout << "PUNTAJE " << nombre1 << ": " << puntaje1 << " PUNTOS";

    rlutil::locate(35, 12);
    cout << "PUNTAJE " << nombre2 << ": " << puntaje2 << " PUNTOS";

    rlutil::locate(30, 15);
    cout << "PRESIONAR UNA TECLA PARA CONTINUAR...";

    rlutil::anykey();
}
