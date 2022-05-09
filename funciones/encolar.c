#ifndef ENCOLAR_C
#define ENCOLAR_C

#include<stdio.h>
#include<stdlib.h>
#include"../estructuras.h"
#include"../prototipos.h"

void encolar(reserva **nv,reserva **S, reserva **E){
    if(*E == NULL){
        *S = *nv;
    }else{
        (*E)->sgte = *nv;
    }
    *E = *nv;
    *nv = NULL;
}

#endif