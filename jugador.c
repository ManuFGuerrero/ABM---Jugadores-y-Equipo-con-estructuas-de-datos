#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipo.h"
#include "jugador.h"
#include "titulo.h"
#include "colas.h"
#include "pilas.h"

struct jugadorE{

char nombre[20];
int numeroCamiseta;

pilaEnc titulos;
};

jugador crearJugadorTeclado(){

jugador j=malloc(sizeof(struct jugadorE));

printf("\nIndique el nombre del Jugador:\n");
fflush(stdin);
gets(j->nombre);


printf("\nIndique el numero de camiseta del Jugador:\n");
scanf("%d",&j->numeroCamiseta);


j->titulos=crearPila(sizeof(titulo));

return j;
};

pilaEnc getPilaTitulos(jugador j){

return j->titulos;
};

void mostrarJugador(jugador j){

printf("\nJUGADOR:\n>%s\n  Numero %d",j->nombre,j->numeroCamiseta);


};


