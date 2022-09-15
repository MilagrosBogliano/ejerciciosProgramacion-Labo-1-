/*Bogliano Milagros Vanesa, DIV J, Ejercicio 3-6*/
#include <stdio.h>
#include <stdlib.h>

void realizarElDescuento(int numeroUno);

int main(){
    int numeroUno;

    do{
        printf("Ingrese un valor entre el 10 y el 100: ");
        scanf("%d",&numeroUno);
    }while(numeroUno<10||numeroUno>100);

    realizarElDescuento(numeroUno);

    return 0;
}

void realizarElDescuento(int numeroUno){

    int descuento;
    int total;

    descuento=(numeroUno * 5)/100;
    total = numeroUno - descuento;
    printf("El total con descuento es: %d",total);
}
