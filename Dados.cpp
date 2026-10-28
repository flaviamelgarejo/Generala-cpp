#include <iostream>
#include "rlutil.h"
#include "DibujoDado.h"

using namespace std;



// Genera un número entre 1 y 6 simulando un dado
    int tirarDado(){
        return rand()%6+1; // %6 da 0-5, +1 lo convierte en 1-6
        }

        // Rellena el vector con 5 valores aleatorios de dados
    void tiradaDados(int dados[5]){
        for(int i=0; i<5; i++){
                dados[i]=tirarDado();// Guarda cada tirada en el array
        } }

        // Muestra los 5 dados en pantalla
        void mostrarDados(int dados[5]) {
        for (int i = 0; i < 5; i++) {
        int posx = 5 + i * 10;// Calcula posición X para cada dado
        int posy = 6;

        dibujarDado(dados[i], posx, posy);// Dibuja el dado según su valor
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }}
