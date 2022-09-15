/*Bogliano Milagrs Vanesa, DIV J, Ejercicio 3-2.*/

#include <stdio.h>
#include <stdlib.h>

float pedirIngreso();

int main(void) {
	setbuf(stdout, NULL);

	float numero;

	numero = pedirIngreso();

	return EXIT_SUCCESS;
}

float pedirIngreso(){
	float numeroIngresado;

	printf("Ingrese el numero: ");
	scanf("%f",&numeroIngresado);

	return numeroIngresado;
}




