/*Bogliano Milagros Vanesa, DIV J, Ejercicio 2-4.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	int i;
	int banderaNumeroMin = 0;
	int numeroMin = 0;
	int numeroParMax = 0;
	int banderaNumeroParMax = 0;
	int acumuladorNegativos = 0;
	int contadorNegativos = 0;

	for(i = 0; i < 3; i++){
		do{
			printf("Ingrese un numero distinto de cero");
			fflush(stdin);
			scanf("%d", &numero);
		}while(numero == 0);

		if(banderaNumeroMin == 0){
		    numeroMin = numero;
		    banderaNumeroMin = 1;
		}else if(numero < numeroMin){
		    numeroMin = numero;
		}

		if(numero % 2 == 0){
			if(banderaNumeroParMax  == 0){
			    numeroParMax = numero;
			    banderaNumeroParMax = 1;
			}else if(numero > numeroParMax){
				numeroParMax = numero;
			}
		}
		if(numero <= 0){
			contadorNegativos++;
			acumuladorNegativos = contadorNegativos * numero;
		}

	}


	printf("A) El numero menor ingresado es: %d", numeroMin);
	printf("\n B) El numero par mas grande ingresado es: %d" , numeroParMax);
	printf("\n C) El producto de los negativos es: %d" , acumuladorNegativos);

	return EXIT_SUCCESS;
}
