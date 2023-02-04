//
// Created by Paul Contreras on 03/02/23.
//

/*
 * ¿Cuál es el valor de l después  de correr el siguiente fragmento de código ?
 */

#include <stdio.h> // This library is for the inputs and outputs handling


// This is the main function, all of our code be inside here :)
int main()
{
    // First I declare the variables that I use for this problem
    int j,k;
    float i,l;

    // Secondly I assigned a value for variables

    i = 100;
    j = 25;
    k = 13;

    // In addition, I assigned a value for variable l, this variable is that we want to know his value
    l =  ( 5* (( j % k)+i)/(2*k))/2;

    // I print the value for l
    printf("El resultado obtenido es: %f", l);
    /*
     * As you can see the output is 10, but if you do the math operation in your calculator the output
     * should be 10.--- some decimals, it passed because in the declaration I put "int" so the value
     * is without decimals, if I want to know the real value,
     * I need tho change the declaration for the l and i variables to float
     * and obviously change the format in the print "%d" -> "%f"
     */


    return 0;
}