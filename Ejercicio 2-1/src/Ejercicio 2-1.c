/* Bogliano Milagros Vanesa, DIV J, Ejercicio 2-1.*/
#include <stdio.h>

int main(){
    int numero;
    char respuesta;

    do{
        do{
            printf("Ingrese un numero ");
            fflush(stdin);
            scanf("%d", &numero);
        }while(numero > 0);

        printf("Desea seguir ingresando numeros? s/n");
        fflush(stdin);
        scanf("%c", &respuesta);
    }while(respuesta == 's');

    return 0;
}
