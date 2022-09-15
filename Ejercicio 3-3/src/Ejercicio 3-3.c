/* Bogliano Milagros Vanesa, DIV J, Ejercicio 3-3.*/

#include <stdio.h>
#include <stdlib.h>

int numeroPar(int par);

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int retorno;

	printf("Ingrese un numero");
	scanf("%d" , &numero);
	retorno = numeroPar(numero);

	printf("El numero es (1 par/ 0 impar): %d" , retorno);

	return EXIT_SUCCESS;
}

int numeroPar(int par){
	int numeroPar;

	if(par%2 == 0){
		numeroPar = 1;
	} else{
		numeroPar = 0;
	}

	return numeroPar;
}





