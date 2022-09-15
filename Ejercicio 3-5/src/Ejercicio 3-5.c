/*Bogliano Milagros Vanesa, Ejericio 3-5 A */

#include <stdio.h>
#include <stdlib.h>
int restar1(int numeroUno, int numeroDos);


int main(void) {
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;


	printf("Ingrese un numero");
	fflush(stdin);
	scanf("%d" , &numeroUno);
	printf("Ingrese otro numero");
	fflush(stdin);
	scanf("%d" , &numeroDos);

	printf("El resultado de la resta es : %d ", restar1(numeroUno, numeroDos));



	return 0;
}

int restar1(int numeroUno, int numeroDos){
	int resultadoTotal;
	resultadoTotal = numeroUno - numeroDos;
	return resultadoTotal;
}


/* Bogliano Milagros Vanesa, Ejercicios 3-5 B

#include <stdio.h>
#include <stdlib.h>
int restar2(void);

int main(void) {
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int resultado;


	printf("Ingrese un numero");
	fflush(stdin);
	scanf("%d" , &numeroUno);
	printf("Ingrese otro numero");
	fflush(stdin);
	scanf("%d" , &numeroDos);

	resultado=restar2();
    printf("El resultado es: %d\n",resultado);


	return 0;
}

int restar2(void)
{
    int numeroUno;
    int numeroDos ;
    int total;

    printf("Ingresar un numero:");
    fflush(stdin);
    scanf("%d",&numeroUno);
    printf("Ingresar un numero:");
    fflush(stdin);
    scanf("%d",&numeroDos);

    total=numeroUno-numeroDos;

    return total;
}*/



/*Bogliano Milagros Vanesa, DIV J, Ejercicio 3-5 C
#include <stdio.h>
#include <stdlib.h>
void restar3(int numeroUno, int numeroDos);

int main(void) {
	setbuf(stdout,NULL);

	int numero1;
	int numero2;
	int resultado;


	printf("Ingrese un numero");
	fflush(stdin);
	scanf("%d" , &numero1);
	printf("Ingrese otro numero");
	fflush(stdin);
	scanf("%d" , &numero2);

	restar3(numero1,numero2);


	return 0;
}

void restar3(int numeroUno, int numeroDos){
    int resultado;

    resultado = numeroUno - numeroDos;

    printf("El resultado es: %d\n", resultado);
}*/


/*Bogliano Milagros Vanesa, DIV J, Ejercicio 3-5 D.
#include <stdio.h>
#include <stdlib.h>

void restar4(void);

int main(void) {
	setbuf(stdout,NULL);

    restar4();

	return 0;
}

void restar4(){

    int numeroUno;
    int numeroDos ;
    int resultado;

    printf("Ingresar un numero:");
    fflush(stdin);
    scanf("%d",&numeroUno);
    printf("Ingresar un numero:");
    fflush(stdin);
    scanf("%d",&numeroDos);

    resultado=numeroUno-numeroDos;
    printf("El resultado es: %d", resultado);

}*/


