#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipo.h"
#include "jugador.h"
#include "titulo.h"
#include "colas.h"
#include "pilas.h"

struct equipoE{

char nombre[20];
int division;

colaEnc jugadores;

};

equipo crearEquipoTeclado(){

equipo e=malloc(sizeof(struct equipoE));

printf("\nIndique el nombre del Equipo:\n");
fflush(stdin);
gets(e->nombre);


printf("\nIndique la division del Equipo:\n");
scanf("%d",&e->division);

e->jugadores=crearCola(sizeof(jugador));

return e;
};

colaEnc getColaJugadores(equipo e){

return e->jugadores;
};

jugador getPrimerJugador (equipo e){     //DEVUELVE SOLO EL PRIMER JUGADOR DE LA COLA

jugador j1= *((jugador*) obtenerElemento(e->jugadores,0) );

return j1;
};

void mostrarEquipo(equipo e){

printf("\nEQUIPO:\n >%s\n >DIVSION %d",e->nombre,e->division);

};
char* getNombreEquipo (equipo e){
return e->nombre;
};
