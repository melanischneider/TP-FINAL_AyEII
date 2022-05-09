#ifndef BUSCAR_DNI_RESERVA_C
#define BUSCAR_DNI_RESERVA_C


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../../estructuras.h"
#include"../../prototipos.h"
int buscar_dni_profesor(long int dni,reserva *ini){
    int encontrado=0;
	while(ini != NULL){
		if(ini->dni == dni){
			encontrado = 1;
		}else{
			encontrado = 0;
		}
		ini = ini->sgte;
	}
	
	return encontrado;
}
#endif