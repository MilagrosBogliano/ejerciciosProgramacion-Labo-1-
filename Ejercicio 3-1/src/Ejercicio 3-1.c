/*Bogliano Milagros Vanesa, DIV J, Ejercicio 3-1.*/


#include <stdio.h>
#include <stdlib.h>

void mostrarUnNumero(int numero);

int main(void) {
	setbuf(stdout,NULL);

	int numero;

	printf("Ingrese el numero: ");
	scanf("%d",&numero);
	mostrarUnNumero(numero);

	return EXIT_SUCCESS;
}

void mostrarUnNumero(int numero){
	printf("El numero que se ingreso es: %d",numero);
}




