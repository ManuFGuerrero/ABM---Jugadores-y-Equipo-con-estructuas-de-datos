#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipo.h"
#include "jugador.h"
#include "titulo.h"
#include "colas.h"
#include "pilas.h"

///TRABAJO PRACTICO INTEGRADOR DE PILAS Y COLAS
///LAS 3 ESTRUCTURAS UTILIZADAS SON UN EQUIPO CON UNA COLA DE JUGADORES QUE A SU VEZ TIENEN UNA PILA DE TITULOS GANADOS
///EL PROGRAMA SE EJECUTA CREANDO POR TECLADO EL EQUIPO PARA LUEGO ABRIR EL MENU QUE PERMITE UTILIZAR LAS PRIMITIVAS NECESARIAS



int main()
{
int indice=-1;

equipo e1=crearEquipoTeclado();
mostrarEquipo(e1);

jugador j1,j2,j3;
titulo t1,t2,t3;

while(indice !=0){
    printf("\n\nBIENVENIDO al PANEL DE MODIFICACION DE -%s-, que desea realizar?\n 1-Encolar un Jugador\n 2-Desencolar un Jugador\n 3-Apilar un Titulo\n",getNombreEquipo(e1));
    printf(" 4-Desapilar un Titulo\n 5-Mostrar el primer Jugador de la Cola\n 6-Mostrar el ultimo Titulo de la Pila \n\n 0-Despedirse\n\n");
    scanf("%d",&indice);

    switch(indice){
        case 1: j1=crearJugadorTeclado();
                encolar(getColaJugadores(e1),&j1);
                printf("\nJugador encolado con exito\n");
        break;

        case 2: if (estaVacia(getColaJugadores(e1)) ==1 ){
                        printf("ERROR_COLA_VACIA");
                        break;
                }

                desencolar(getColaJugadores(e1),&j2);
                printf("\nHemos desencolado al siguiente jugador\n");
                mostrarJugador(j2);
        break;

        case 3: printf("\nRECUERDA QUE SOLO PODRAS APILAR UN TITULO AL PRIMER JUGADOR DE LA COLA\n");
                t1=crearTituloTeclado();
                apilar(getPilaTitulos(getPrimerJugador(e1)),&t1);
                printf("\nTitulo apilado con exito\n");
        break;

        case 4: if (estaVacia(getColaJugadores(e1)) ==1 ){
                    printf("ERROR_PILA_VACIA");
                    break;
                    }else if (PilaEstaVacia(getPilaTitulos(getPrimerJugador(e1) ) ) == 1 ){
                        printf("ERROR_PILA_VACIA");
                        break;
                }

                printf("\nRECUERDA QUE SOLO PODRAS DESAPILAR UN TITULO DEL PRIMER JUGADOR DE LA COLA\n");
                desapilar(getPilaTitulos(getPrimerJugador(e1) ), &t2);
                printf("\nHemos desapilado el siguiente titulo\n");
                mostrarTitulo(t2);
        break;

        case 5: if (estaVacia(getColaJugadores(e1)) ==1 ){
                        printf("ERROR_COLA_VACIA");
                        break;
                }
                j3=* ((jugador* ) obtenerElemento(getColaJugadores(e1),0));
                mostrarJugador(j3);
        break;

        case 6: if (estaVacia(getColaJugadores(e1)) ==1 ){
                    printf("ERROR_PILA_VACIA");
                    break;
                    }else if (PilaEstaVacia(getPilaTitulos(getPrimerJugador(e1) ) ) == 1 ){
                        printf("ERROR_PILA_VACIA");
                        break;
                }
                t3=* ((titulo* ) obtenerDato(getPilaTitulos(getPrimerJugador(e1) ),0) );
                mostrarTitulo(t3);
        break;

        case 0: printf("\nGRACIAS POR UTILIZAR NUESTRO NUEVO PANEL, VUELVA PRONTO ;) \n");
        break;

        default: printf("\n ERROR_INDICE_INVALIDO\n");

    }
printf("\n\n");
system("pause");

system("cls");

}

return 0;
}
