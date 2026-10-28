#include <iostream>
#include <string>
#include <ctime>
using namespace std;
#include "OpcionesdelMenu.h"
#include "jugarRonda.h"
#include "Puntaje.h"
#include "rlutil.h"

int jugarRonda(string &nombreJugador, int ronda, int puntajeTotal){

    int lanzamiento = 1;
    char respuesta;


    int dados[5];           // vector de 5 dados
    tiradaDados(dados);

    int caras [6];
    contarCarasDeDados (dados, caras); // se cuentas las caras del primer lanzamiento
    if (esGenerala(caras) == true){    // evalua si es generala
    cout << "----------------------------------------" << endl;
    cout << "   ¡GENERALA SERVIDA! " << endl;
    cout << " Ganador  " << nombreJugador << " lo lograste!!!!" << endl;
    cout << " En la ronda: " << ronda << endl;
    cout << "----------------------------------------" << endl;

    return 250;
    }

do {

    cout<<"TURNO DE "<<nombreJugador<<" | "<< "RONDA "<< ronda << " | "<< "PUNTAJE TOTAL "<< puntajeTotal <<endl;
    cout<<"--------------------------------------------------------------------"<<endl<<endl;
    cout<<"LANZAMIENTO "<<lanzamiento<<endl;
    cout<<"--------------------------------------------------------------------"<<endl<<endl;


    mostrarDados(dados);   // jugada

    /// Preguntar si quiere volver a tirar
    if (lanzamiento < 3) {
        cout<<"¿CONTINUAR LANZANDO (S/N)? ";
        cin >> respuesta;
        if (respuesta=='S'|| respuesta == 's'){
                rlutil::setBackgroundColor(rlutil::LIGHTRED);
        rlutil::setColor(rlutil::WHITE);
            int cantidad;
            cout<<"¿CUANTOS DADOS VOLVES A TIRAR? ";
            cin >> cantidad;
            for (int i = 0; i < cantidad; i++) {
                int indice;
                cout << "¿CUAL DADO (1-5)?: ";
                cin >> indice;
                /// Reemplazo ese dado con un nuevo valor aleatorio
                dados[indice - 1] = tirarDado(); ///nueva tirada
            }
            system("cls");
        }
        rlutil::setBackgroundColor(rlutil::LIGHTRED);
        rlutil::setColor(rlutil::WHITE);
    }
    else {
        cout<<"FIN DE RONDA "<<ronda;
rlutil::setBackgroundColor(rlutil::LIGHTRED);
        rlutil::setColor(rlutil::WHITE);
        system("pause>nul");
        rlutil::setBackgroundColor(rlutil::LIGHTRED);
        rlutil::setColor(rlutil::WHITE);

    respuesta = 'N';   // fuerza la salida del while

    }
    lanzamiento ++;


} while (lanzamiento <= 3 && (respuesta=='S' || respuesta=='s'));

    caras[6];
    contarCarasDeDados(dados, caras);

    int mejor = puntajeCombinacionesSimples(caras);

    mejor = puntajeFinalDeJugada(caras, mejor);

    return mejor;

}




