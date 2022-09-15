/*Bogliano Milagros Vanesa, DIV J, Ejercicio 2-3.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numero;
		printf("Ingrese un numero ");
	    fflush(stdin);
	    scanf("%d", &numero);


	    if(numero % 2 == 0){
	    	printf(" El numero es par : %d", numero);
	    }
	    if(numero % 2 != 0){
	    	printf(" El numero es impar : %d", numero);
	    }


	return EXIT_SUCCESS;
}
