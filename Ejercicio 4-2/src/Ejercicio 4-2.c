//Bogliano Milagros Vanesa, DIV J. Ejercicio 4-2
#include <stdio.h>
#include <stdlib.h>

#include "Suma.h"
#include "IngresoDeNumero.h"


int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int respuesta;
	int validar;

	numeroUno = pedirNumero();
	numeroDos = pedirNumero();

	validar = sumar( numeroUno, numeroDos, &respuesta);
	if(validar == 0 ){
		printf("La respues es %d",respuesta );
	} else{
		printf("Error.");
	}


	return EXIT_SUCCESS;
}
