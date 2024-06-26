#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipo.h"
#include "jugador.h"
#include "titulo.h"
#include "colas.h"
#include "pilas.h"

struct tituloE{

char nombre[20];

};

titulo crearTituloTeclado(){

titulo t=malloc(sizeof(struct tituloE));

printf("\nIndique el nombre del Titulo:\n");
fflush(stdin);
gets(t->nombre);


return t;
};

void mostrarTitulo(titulo t){
printf("\nTITULO:\n>%s\n",t->nombre);
};




void destruirTitulo (titulo t){

free(t);
};
