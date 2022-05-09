#ifndef MODIFICAR_PROFESOR_C
#define MODIFICAR_PROFESOR_C

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../../estructuras.h"
#include"../../prototipos.h"
void modificar_profesor(long int dato,int op,profesor **ini_profesor){
	while(*ini_profesor != NULL){
		
		if((*ini_profesor)->dni == dato){
		
			if(op==1){
				fflush(stdin);
				gets((*ini_profesor)->nombre);
			}else if(op==2){
				scanf("%ld",&(*ini_profesor)->telefono);
			}
			*ini_profesor = NULL;
		}
		
		*ini_profesor = (*ini_profesor)->sgte;	
	}
}


#endif