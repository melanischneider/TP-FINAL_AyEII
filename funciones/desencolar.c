#ifndef DESENCOLAR_C
#define DESENCOLAR_C

#include<stdio.h>
#include<stdlib.h>
#include"../estructuras.h"
#include"../prototipos.h"

void desencolar(reserva **nv,reserva **S, reserva **E){
    *nv = *S;
    *S = (*S)->sgte;
    if(*S==NULL){
        *E = NULL;
    }
}

#endif