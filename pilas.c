#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pilas.h"

#define TRUE 1
#define FALSE -1

struct NodoE{

void * item;
nodo prox;
};

struct PilaE{

nodo primero;

int tamDatoEnBytes;
int tam;

};;


//CONSTRUCTORES
pilaEnc crearPila (int tamDatoEnBytes){

pilaEnc nuevaPila =malloc (sizeof (struct PilaE));

nuevaPila->primero=NULL;
nuevaPila->tam=0;
nuevaPila->tamDatoEnBytes=tamDatoEnBytes;


return nuevaPila;
};

nodo creandoNodo(pilaEnc pila, void* item){

nodo nuevoNodo=malloc(sizeof (struct NodoE));

nuevoNodo->item=malloc (sizeof (pila->tamDatoEnBytes));

memcpy(nuevoNodo->item,item,pila->tamDatoEnBytes);
nuevoNodo->prox=NULL;

return nuevoNodo;
};

//IMPORTANTE
int PilaEstaVacia (pilaEnc pila){

if (pila->tam==0){
    return 1;
}
return -1;
};

//AUXILIARES
void* obtenerDato (pilaEnc pila, int pos){

nodo actual=pila->primero;

for (int i=0;i<pos;i++){
    actual=actual->prox;
}
return actual->item;
};

int obtenerTamanioPila (pilaEnc pila){
return pila->tam;
};



//PRIMITIVAS
int apilar (pilaEnc pila, void* item){


nodo nuevo=creandoNodo(pila,item);

if(pila->tam==0){

    pila->primero=nuevo;
    pila->tam++;
    return TRUE;
}

nuevo->prox=pila->primero;
pila->primero=nuevo;
pila->tam++;



return TRUE;
};

int desapilar (pilaEnc pila, void* item){

if(pila->tam==0){
    printf("\nLA PILA ESTA VACIA \n");
    return FALSE;
}

nodo aux=pila->primero;

memcpy(item,aux->item,pila->tamDatoEnBytes);
pila->primero=aux->prox;
pila->tam--;

free(aux);
aux=NULL;

return TRUE;
};


//DESTRUCTOR
void liberarPila (pilaEnc pila){



};
