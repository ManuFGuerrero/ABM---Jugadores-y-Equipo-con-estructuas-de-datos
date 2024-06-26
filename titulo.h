#ifndef TITULO_H_INCLUDED
#define TITULO_H_INCLUDED

#include "pilas.h"

struct tituloE;

typedef struct tituloE * titulo;

titulo crearTituloTeclado();

void mostrarTitulo(titulo t);

void destruirTitulo (titulo t);


#endif // TITULO_H_INCLUDED
