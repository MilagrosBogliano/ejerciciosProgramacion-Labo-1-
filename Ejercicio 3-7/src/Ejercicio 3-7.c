/*Bogliano Milagros Vanesa, DIV J, Ejercicio 3-7*/

#include <stdio.h>
#include <stdlib.h>

int asignarValor(void);
int funcionDeOperaciones(char,int,int);

int main(void){
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int repuesta;
	char operaciones;
	numeroUno = asignarValor();
	numeroDos = asignarValor();

    do{
    	printf("ingrese la operacion que quiera realizar ");
    	scanf("%c",&operaciones);
	}while(operaciones != 's' && operaciones != 'r');

	repuesta = funcionDeOperaciones(operaciones,numeroUno,numeroDos);

	printf("el resultado es %d",repuesta);

	return EXIT_SUCCESS;
}

int asignarValor(void){

	int numero;

    do{
        printf("Ingrese el valor");
	    scanf("%d",&numero);
	}while(numero<10 || numero>100);

	return numero;
}

int funcionDeOperaciones(char operaciones,int numeroUno,int numeroDos){

	int respuestas;

	if(operaciones == 's'){
		respuestas = numeroUno + numeroDos;
	} else{
		respuestas = numeroUno - numeroDos;
	}
	return respuestas;
}

