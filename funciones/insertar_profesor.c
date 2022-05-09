#ifndef INSERTAR_PROFESOR_C
#define INSERTAR_PROFESOR_C

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../estructuras.h"
#include"../prototipos.h"
void insertar_profesor(profesor **nv, profesor **ini_profesor){
    profesor *aux = *ini_profesor;
    if(*ini_profesor != NULL){
        while(aux->sgte != NULL){
            aux = aux->sgte;
        }
        aux->sgte = *nv;
        *nv = NULL;
    }else{
        *ini_profesor = *nv;
        *nv = NULL;
	}
}
#endif