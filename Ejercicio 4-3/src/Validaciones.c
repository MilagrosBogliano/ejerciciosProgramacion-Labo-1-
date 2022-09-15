/* Validaciones.c
* Bogliano Milagros Vanesa, DIV J.*/
#include "Validaciones.h"

int validarFloatConRango(float numero, int min, int max){

	int retorno;

	if(numero>=min && numero<=max){
		retorno=0;
	} else{
		retorno=-1;
	}

	return retorno;
}

