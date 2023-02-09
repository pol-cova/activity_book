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
     * The function sizeof, return the size in bytes for the variable.
     * I used %lu, because is an unsigned long value.
     */

    printf("The value for int is: %d and his size: %lu bytes \n", a, sizeof(int));
    printf("The value for float is: %f and his size: %lu bytes \n", b, sizeof(float ));
    printf("The value for char is: %c  and his size: %lu bytes \n", c, sizeof(char));
    printf("The value for double is: %lf and his size: %lu bytes \n", d, sizeof(double ));

}
