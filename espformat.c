//
// Created by Paul Contreras on 04/02/23.
//
#include <stdio.h>

int main(void)

{

    int i; i = 31;

    printf("%d %x %o",i,i,i);  // CORRECTO.


    char c ;

    c = '?';

    printf("%d",c); // ESTO SI ES POSIBLE; PUES SE TRABAJA CON ENTEROS.

    int l;

    l = 31;

    printf("%f",l); // EL FORMATO ESCOGIDO ES INCORRECTO

    int h; h = 31;

    printf("%d %x %o",h,h); // FALTA UNA VARIABLE. INCORRECTO.

    return 0;



}
