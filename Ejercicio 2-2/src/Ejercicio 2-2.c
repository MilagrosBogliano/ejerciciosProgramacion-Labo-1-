/*Bogliano Milagros Vanesa, DIV J, Ejercicio 2-2*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numero;
	char respuesta;
	int sumaPositivos = 0;
	int promedioPositivos = 0;
	int contadorPositivos = 0;
	int contadorNegativos = 0;
	int banderaPositivos = 0;
	int sumaNegativos = 0;
	int promedioNegativos = 0;
	int banderaNegativos = 0;
	int numeroMin = 0;
	int numeroMax = 0;

	do{
		printf("Ingrese un numero ");
	    fflush(stdin);
	    scanf("%d", &numero);

		printf("Desea seguir ingresando numeros? s/n %c" , respuesta);
	    fflush(stdin);
	    scanf("%c", &respuesta);


	     if(numero >= 0){
	    	contadorPositivos++;
	    	sumaPositivos = sumaPositivos + numero;
	    } else{
	    	contadorNegativos++;
	    	sumaNegativos = sumaNegativos + numero;
	    }

	     if(numero > 0){
			if(banderaPositivos == 0){
				numeroMin = numero;
				banderaPositivos = 1;
			}else if(numero < numeroMin){
				numeroMin = numero;
			}
	    }
	    if(numero < 0){
	    	if(banderaNegativos == 0) {
	    	    numeroMax = numero;
	    	    banderaNegativos = 1;
	    	}else if(numero > numeroMax){
	    	    numeroMax = numero;
	    	}
	    }
	}while(respuesta == 's');

	if(contadorPositivos > 0){
		promedioPositivos = sumaPositivos / contadorPositivos;
	} else{
		promedioPositivos = 0;
	}
	if(contadorNegativos > 0){
		promedioNegativos = sumaNegativos / contadorNegativos;
	} else{
		promedioNegativos =0;
	}
	printf("A) El promedio de los numeros positivos es : %d" , promedioPositivos);
	printf(" El numero minimo ingresado es: %d", numeroMin);
	printf("\nB) El promedio de los numeros negativos es : %d" , promedioNegativos);
	printf(" El numero maximo ingresado es: %d", numeroMax);

	return EXIT_SUCCESS;
}

