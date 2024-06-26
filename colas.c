#include <stdio.h>
#include <stdlib.h>


#include "colas.h"
struct NodoE{

void* item;
nodo prox;

};;

struct ColaE{

nodo primero;
int tam;
int tamDatoEnBytes;
};

//CONSTRUCTORES
colaEnc crearCola(int tamDato) {

colaEnc nuevaCola=malloc(sizeof (struct ColaE));

if (nuevaCola !=NULL){

    nuevaCola->tamDatoEnBytes=tamDato;
    nuevaCola->primero=NULL;
    nuevaCola->tam=0;

}

return nuevaCola;
};
nodo crearNodo (colaEnc cola, void* item){

nodo nuevoNodo=malloc(sizeof(struct NodoE));

if (nuevoNodo != NULL){

    nuevoNodo->item=malloc(cola->tamDatoEnBytes);
    memcpy(nuevoNodo->item, item, cola->tamDatoEnBytes);
    nuevoNodo->prox=NULL;
}

return nuevoNodo;
};


//IMPORTANTES

int estaVacia (colaEnc cola){

if (cola->tam == 0) return 1;


return -1;
};

//AUXILIARES
void* obtenerElemento (colaEnc cola, int pos){

if (pos <0 || pos>cola->tam){return -1;}

if (cola !=NULL){
    if (pos ==0){
        return cola->primero->item;
        }
    nodo aux=cola->primero;
    for(int i=0;i<pos;i++){
        aux=aux->prox;
    }
    return aux->item;
}

return -2;
};

int obtenerElementoParametro (colaEnc cola, int pos, void* itemRecuperado){

if (pos <0 || pos>cola->tam){return -1;}

if (cola !=NULL){
    if (pos ==0){
        memcpy(itemRecuperado,cola->primero->item,cola->tamDatoEnBytes);
        return 1;
        }
    nodo aux=cola->primero;
    for(int i=0;i<pos;i++){
        aux=aux->prox;
    }
    memcpy(itemRecuperado,aux->item,cola->tamDatoEnBytes);
    return 1;
}

return -2;
};

int obtenerTamanio (colaEnc cola){

return cola->tam;
};

//PRIMITIVAS

int encolar (colaEnc cola, void* item){


int pos=cola->tam;


nodo nuevoNodo=crearNodo(cola,item);

if (pos==0){
    cola->primero=nuevoNodo;
    cola->tam++;
    return 1;
}
else{
    nodo aux=cola->primero;
    for(int i=0;i<pos-1;i++){
        aux=aux->prox;
    }

    aux->prox=nuevoNodo;
    cola->tam++;
}

return 1;
};

int desencolar (colaEnc cola, void* itemRecuperado){

nodo aux=cola->primero;
if (cola->primero !=NULL){

    memcpy(itemRecuperado,aux->item,cola->tamDatoEnBytes);
    cola->primero=aux->prox;

    free(aux);
    aux=NULL;
    cola->tam--;
    return 1;
}
return -1;
};





//DESTRUCTOR
int destruirCola (colaEnc cola){

while ( estaVacia(cola)==-1){
       printf("\n /%d/",desencolar(cola,NULL));
}
free(cola);
cola->primero=NULL;

};

