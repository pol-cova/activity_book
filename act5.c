//
// Created by Paul Contreras on 03/02/23.
//
/*
 * This is a program for find a value for r
 */

#include <stdio.h> // This library is for the inputs and outputs handling


// This is the main function, all of our code be inside here :)
int main()
{
    /*
     * First I declare the variables for this problem x,y,z and r as a float
     */

    float x,y,z,r;

    // Initialize with print a header text
    printf("\n\n Este programa halla el resultado de r \n\n");

    // Request a value for the variables "x,y,z"
    printf("Ingrese los valores de x,y,z: ");
    scanf("%f %f %f", &x,&y,&z);

    /*
     * Next I assigned the math equation to find r, and after assignation the machine
     * get the user's values and return the value for r
     */

    r = (x + y + z) / 3;

    // Here the program return the output
    printf("El valor de r es: %f", r);

    return 0;
}