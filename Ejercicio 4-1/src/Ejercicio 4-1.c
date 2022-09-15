// Bogliano Milagros Vanesa, DIV J. Ejercicio 4-1.

#include <stdio.h>
#include <stdlib.h>

int pedirNumEntero();

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	int acumuladorNumeros = 0;
	int acumuladorTotal = 0;
	char respuesta;

	do{
		numero = pedirNumEntero();

		acumuladorNumeros = acumuladorNumeros + numero;
		acumuladorTotal = acumuladorNumeros * acumuladorNumeros;

		printf("Si desea ingresar otro numero presione [s]");
	    fflush(stdin);
	    scanf("%c",&respuesta);
	}while(respuesta == 's');

	printf("\n Factorial de numeros ingresados: %d", acumuladorTotal);

	return EXIT_SUCCESS;
}
int pedirNumEntero(){
	int numero;

	printf("Ingrese un numero entero ");
	scanf("%d",&numero);

	return numero;
}



