#pragma once


// MENU:
void OpcionesdelMenu(int &MenuPrincipal,int &maxPuntaje, std::string &maxJugador);
void jugarSolo(int &maxPuntaje, std::string &maxJugador);
void DosJugadores(int &maxPuntaje, std::string &maxJugador);
void creditos();

// RECORD:
void mostrarRecord(int maxPuntaje, std::string maxJugador);
void nuevoRecord(std::string &nombreJugador, int puntajeTotal, int &maxPuntaje, std::string &maxJugador);



// DADOS:
int tirarDado();
void tiradaDados(int dados[]);
void mostrarDados(int dados[]);
