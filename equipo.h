#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED
#include "colas.h"
#include "pilas.h"
#include "jugador.h"
struct equipoE;

typedef struct equipoE * equipo;

equipo crearEquipoTeclado ();


colaEnc getColaJugadores(equipo e);


jugador getPrimerJugador (equipo e); //DEVUELVE SOLO EL PRIMER JUGADOR DE LA COLA
void mostrarEquipo(equipo e);

char* getNombreEquipo (equipo e);


#endif // EQUIPO_H_INCLUDED
