/*Bogliano Milagros Vanesa, DIV J. Ejercicio 2-5.*/

#include <stdio.h>
#include <stdlib.h>

#define precioLibretaSinDescuento 450
#define precioLibretaMas60 337.5

int main(void) {
	setbuf(stdout,NULL);

		int numeroLegajo;
		char estadoCivil;
		int edad;
		int anoDeIngreso;
		char sexo;
		char respuesta;
		int contadorMas60 = 0;
		int banderaMujerMasAntigua = 0;
		int edadMax = 0;
		int numeroLegajoMax = 0;
		int anoDeIngresoMax = 0;
		int acumuladorPrecioSinDescuento = 0;
		int contadorAlumnos = 0;
		int descuento = 0;
		int precioFinal = 0;
		int precioTotalMas60 = 0;

		do{
			do{
				printf("Ingrese su numero de Lagajo (4 cifras sin ceros a la derecha): ");
				fflush(stdin);
				scanf("%d", &numeroLegajo);
			}while(numeroLegajo<1001 || numeroLegajo>9999);
			do{
				printf("Ingrese su estado civil. s: soltero c: casado v: viudo");
				fflush(stdin);
				scanf("%c", &estadoCivil);
			}while(estadoCivil!='s' && estadoCivil!='c' && estadoCivil!='v');
			do{
				printf("Ingrese su edad: ");
				fflush(stdin);
				scanf("%d", &edad);
			}while(edad<17 || edad> 75);
			do{
				printf("Ingrese el año en que ingreso: ");
				scanf("%d", &anoDeIngreso);
			}while(anoDeIngreso<2000 || anoDeIngreso>2022);

			do{
				printf("Ingrese su genero. f (femenino) m (masculino) o (no binario)");
				fflush(stdin);
				scanf("%c", &sexo);
			}while(sexo!='f' && sexo!='m' && sexo!='o');

			if(edad > 60){
				contadorMas60++;
			}

			if(banderaMujerMasAntigua == 0) {
				anoDeIngresoMax = anoDeIngreso;
				edadMax = edad;
			    numeroLegajoMax = numeroLegajo;
			    banderaMujerMasAntigua = 1;
			}else if(anoDeIngresoMax > anoDeIngreso){
				anoDeIngresoMax = anoDeIngreso;
			    edadMax = edad;
			    numeroLegajoMax = numeroLegajo;
			}

			contadorAlumnos++;

			printf("Desea seguir ingresando datos? s/n");
			fflush(stdin);
			scanf("%c",&respuesta);
		}while(respuesta=='s');


		acumuladorPrecioSinDescuento = precioLibretaSinDescuento * contadorAlumnos;

		printf("A) La cantidad de personas mayores a 60 años es: %d" , contadorMas60);
		printf("\n B) La edad de la mujer que ingreso hace mas tiempo es: %d", edadMax);
		printf(" y su numero de legajo es: %d ",numeroLegajoMax);
		printf("\n C)La facultad  debe abonar por las libretas sin el descuento: %d", acumuladorPrecioSinDescuento);

		if(contadorAlumnos > 5){
			descuento  = (acumuladorPrecioSinDescuento * 5)/100;
			precioFinal = acumuladorPrecioSinDescuento - descuento;
			printf("\n D) El precio con descuento: %d ", precioFinal);
		}else if(contadorAlumnos > 10){
			descuento  = (acumuladorPrecioSinDescuento * 10)/100;
			precioFinal = acumuladorPrecioSinDescuento - descuento;
			printf("\n D) El precio con descuento: %d ", precioFinal);
		}
		if(edad > 60){
			precioTotalMas60 = precioLibretaMas60 * contadorAlumnos;
			precioFinal = precioFinal + precioTotalMas60;
			printf("\n D) El precio con descuento: %d ", precioFinal);
		}




	return EXIT_SUCCESS;
}

