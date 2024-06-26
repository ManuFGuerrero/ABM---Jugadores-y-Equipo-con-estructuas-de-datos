#ifndef COLAS_H_INCLUDED
#define COLAS_H_INCLUDED

struct NodoE;

typedef struct NodoE * nodo;

struct ColaE;

typedef struct ColaE * colaEnc;

//CONSTRUCTORES
colaEnc crearCola (int tamDato);
nodo crearNodo (colaEnc cola, void* item);


//IMPORTANTES

int estaVacia (colaEnc cola);

//AUXILIARES
void* obtenerElemento (colaEnc cola, int pos);

int obtenerElementoParametro (colaEnc cola, int pos, void* itemRecuperado);

int obtenerTamanio (colaEnc cola);


//PRIMITIVAS

int encolar (colaEnc cola, void* item);

int desencolar (colaEnc cola, void* itemRecuperado);



//DESTRUCTOR
int destruirCola (colaEnc cola);





#endif // COLAS_H_INCLUDED
