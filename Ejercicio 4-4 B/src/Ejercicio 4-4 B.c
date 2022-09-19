//Bogliano Milagros Vanesa, DIV J. Ejercicio 4-4 B.


#include <stdio.h>
#include <stdlib.h>

int main(void){
	setbuf(stdout, NULL);

	int opcion;

		printf("1- Loguearse \n"
				"2- Comprar \n"
				"3- Ver compras \n"
				"4- Vender \n"
				"5- Salir \n");
		scanf("%d", &opcion);

		if(opcion != 1){
			printf("Para poder comprar primero se debe logiar");
		}


	return EXIT_SUCCESS;
}

