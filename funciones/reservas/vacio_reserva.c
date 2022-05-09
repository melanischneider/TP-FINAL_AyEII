#ifndef VACIO_RESERVA_C
#define VACIO_RESERVA_C

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../../estructuras.h"
#include"../../prototipos.h"

void vacio_reserva(reserva *S){
    int valor;
    if(S == NULL){
        valor = 1;
    }else
        valor = 0;

    return valor;
}


#endif