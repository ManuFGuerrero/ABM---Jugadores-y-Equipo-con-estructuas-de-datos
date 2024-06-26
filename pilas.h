#ifndef PILAS_H_INCLUDED
#define PILAS_H_INCLUDED

struct NodoE;

typedef struct NodoE * nodo;

struct PilaE;

typedef struct PilaE * pilaEnc;

//CONSTRUCTORES
pilaEnc crearPila (int tamDatoEnBytes);
nodo creandoNodo(pilaEnc pila, void* item);

//IMPORTANTE
int PilaEstaVacia (pilaEnc pila);

//AUXILIARES
void* obtenerDato (pilaEnc pila, int pos);
int obtenerTamanioPila (pilaEnc pila);

//PRIMITIVAS
int apilar (pilaEnc pila, void* item);

int desapilar (pilaEnc pila, void* item);


//DESTRUCTOR
void liberarPila (pilaEnc pila);
#endif // PILAS_H_INCLUDED
