/* Conversiones.c
 * Bogliano Milagros Vanesa, DIV J.*/

#include "conversiones.h"

int convertirAFarenheit(float temperatura, float* resultado){
	int retorno;

	retorno=-1;

	if(resultado!=NULL){
		*resultado=(temperatura * 9/5) + 32;
		retorno=0;
	}
	return retorno;
}
int convertirACelcius(float temperatura, float* resultado){

	int retorno;

	retorno=-1;

	if(resultado!=NULL){
		*resultado=(temperatura - 32)* 5/9;
		retorno=0;
	}

	return retorno;
}
