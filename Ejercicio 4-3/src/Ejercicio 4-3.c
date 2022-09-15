//Bogliano Milagros Vanesa, DIV J. Ejercicio 4-3.
#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"
#include "Ingresos.h"
#include "Conversiones.h"

#define MINIMOCELCIUS 0
#define MINIMOFAHRENHEIT 32
#define MAXIMOCELCIUS 100
#define MAXIMOFAHRENHEIT 212

int main(void){
	setbuf(stdout,NULL);

	float temperatura;
	int retornoRangos;
	int retornoConversiones;
	float resultado;
	char unidad;
	char respuesta;

	do{
		do{
			printf("Si desea ingresar una temperatura en Celcius pulse 'c', para  ingresar en Fahrenheit pulse 'f'\n");
			fflush(stdin);
			scanf("%c", &unidad);

			if(unidad != 'c' && unidad != 'f'){
				printf("ERROR, Por favor, Ingrese una 'c' o una 'f'.\n");
			}
		}while(unidad != 'c' && unidad != 'f');

		temperatura = ingresarFloat();

		if(unidad == 'c'){
			retornoRangos = validarFloatConRango(temperatura,MINIMOCELCIUS , MAXIMOCELCIUS );
			if(retornoRangos == 0){
				retornoConversiones = convertirAFarenheit(temperatura, &resultado);

				if(retornoConversiones == 0){
					printf("%.2f grados celcius equivalen a %.2f grados farenheit\n",temperatura,resultado);
				}
			} else{
				printf("ERROR, cargue temperatura teniendo en cuenta los rangos minimos y maximos\n");
				}
		} else{
				retornoRangos = validarFloatConRango(temperatura,MINIMOFAHRENHEIT , MAXIMOFAHRENHEIT);
				if(retornoRangos == 0){
					retornoConversiones = convertirACelcius(temperatura, &resultado);
					if(retornoConversiones == 0){
						printf("%.2f grados farenheit equivalen a %.2f grados celcius \n ",temperatura,resultado);
					}
				} else{
					printf("ERROR,cargue temperatura teniendo en cuenta los rangos minimos y maximos\n");
				}
		}

		printf("Si desea cargar otra temperatura presione 's'\n");
		fflush(stdin);
		scanf("%c", &respuesta);


	}while(respuesta == 's');

	return EXIT_SUCCESS;
}
