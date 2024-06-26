#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

#include "colas.h"
#include "pilas.h"

struct jugadorE;

typedef struct jugadorE * jugador;

jugador crearJugadorTeclado();

pilaEnc getPilaTitulos(jugador j);



void mostrarJugador(jugador j);


#endif // JUGADOR_H_INCLUDED
