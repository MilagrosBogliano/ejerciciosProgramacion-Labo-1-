/* Suma.c
 * Bogliano Milagros Vanesa, DIV J. Ejercicio 4-2*/

#include <stdio.h>
#include <stdlib.h>

int sumar(int numeroUno, int numeroDos, int* respuesta){

	int resultado;
	int retorno;


	resultado = numeroUno + numeroDos;

	if(resultado != 0 ){
		retorno = 0;
	}else{
		retorno = -1;
	}

	*respuesta = resultado;
	return retorno;
}

