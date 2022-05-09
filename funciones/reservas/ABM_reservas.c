#ifndef ABM_RESERVAS_C
#define ABM_RESERVAS_C

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../../estructuras.h"
#include"../../prototipos.h"

void ABM_reservas(cliente **S,cliente **E){
    int opcion,encontrado;
    long int dni_quitar;
    cliente *nv=NULL;
    do{
        system("cls");
        printf("1. Alta reserva\n");
        printf("2. Baja reserva\n");
        printf("3. Modificacion reserva\n");
        printf("0.Atras\n");
        printf(">> ");scanf("%d",&opcion);
    }while(opcion<0 || opcion>3);

    //opcion 1
    fflush(stdin);
    printf("Ingresar nombre del cliente: ");gets(nv->nombre);
    printf("Ingresar DNI del cliente: ");scanf("%ld",&nv->dni);
    printf("Ingresar telefono del cliente: ");scanf("%d",&nv->telefono);
    printf("Ingresar fecha de nacimiento del cliente (formato dd/mm/aa): ");scanf("%d/%d/%d",&nv->f_nacimiento.dd,&nv->f_nacimiento.mm,&nv->f_nacimiento.yy);
    do{
        printf("Esta seguro de que quiere realizar la reserva? (1.Si, 0.No): ");scanf("%d",&opcion);
    }while(opcion<0 || opcion>1);
    if(opcion){
        encolar(&nv,&*S,&*E);
    }

    //fin opcion 1

    //opcion 2
    while(){

    }
    while(){

    }
    //buscamos el nodo con el dni, si es el que buscamos lo eliminamos, sino, encolamos el nodo

    //fin opcion 2
}

#endif
