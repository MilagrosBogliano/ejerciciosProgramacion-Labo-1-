/*Bogliano Milagros Vanesa, DIV J, Ejercicio 2-6.*/

#include <stdio.h>
#include <stdlib.h>

#define precioLibretaSinDescuento 450
#define precioLibretaMas60 337.5

int main(void) {
	setbuf(stdout,NULL);

		char letra;
		int i;
		int contadorLetraM = 0;


		for(i = 0; i < 5; i++){
			printf("Ingrese una letra");
			fflush(stdin);
			scanf("%c", &letra);

			if(letra == 'm'){
				contadorLetraM++;
			}
		}

		printf("La cantidad de letras m (minusculas) ingasada es: %d" , contadorLetraM);





	return EXIT_SUCCESS;
}

