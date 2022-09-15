/*Bogliano Milagros Vanesa, DIV J, Ejercicio 3-4.*/

#include <stdio.h>
#include <stdlib.h>

#define MINIMO 10
#define MAXIMO 100
int validacionFloatConRangos( float numero, int maximo, int minimo);

int main(void) {
	setbuf(stdout, NULL);

	float numero;
	int valido;

	printf("Ingrese un numero");
	scanf("%d" , &numero);

	valido = validacionFloatConRangos(numero,MINIMO,MAXIMO);

	printf("Se ingreso el: %.2f, y se lo valida con: %d",numero,valido);

	return EXIT_SUCCESS;
}

int validacionFloatConRangos( float numero, int maximo, int minimo){

	int num;

	if(numero >= minimo && numero <= maximo){
		num = 1;
	} else{
		num = 0;
	}
	return num;
}
