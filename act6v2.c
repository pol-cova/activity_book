//
// Created by Paul Contreras on 09/02/23.
//
#include <stdio.h>

int main()
{
    /*
     * This version include a feature to print the valor in his size.
     */
    int a = 5;
    float b = 7.9;
    char c = 'a';
    double d = 4.55;

    /*
     * The function sizeof, return the size in bits for the variable.
     */

    printf("The value for int is: %d and his size: %lu bits \n", a, sizeof(a));
    printf("The value for float is: %f and his size: %lu bits \n", b, sizeof(b));
    printf("The value for char is: %c  and his size: %lu bit \n", c, sizeof(c));
    printf("The value for double is: %lf and his size: %lu bits \n", d, sizeof(d));

}
