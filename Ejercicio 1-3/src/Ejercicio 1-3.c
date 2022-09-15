// Ejercicio 1-3, Milagros Vanesa Bogliano, 1J

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Ingrese un numero");
	scanf("%d",&numeroUno);
	printf("Ingrese un numero");
	scanf("%d",&numeroDos);
	printf("Ingrese un numero");
	scanf("%d",&numeroTres);

	if(numeroUno!=numeroDos && numeroUno!=numeroTres && numeroDos!=numeroTres){
		if((numeroUno>numeroDos && numeroUno<numeroTres)|| (numeroUno<numeroDos && numeroUno>numeroTres)){
			printf("De los 3 numeros ingresados, el del medio es %d",numeroUno);
		} else if((numeroDos>numeroUno && numeroDos<numeroTres) || (numeroDos<numeroUno && numeroDos>numeroTres)){
				printf("De los 3 numeros ingresados, el del medio es %d",numeroDos);
			} else{
				printf("De los 3 numeros ingresados, el del medio es %d",numeroTres);
			}
	} else{
		printf("No existe numero del medio");
	    }

	return EXIT_SUCCESS;
}


