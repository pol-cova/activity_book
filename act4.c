//
// Created by Paul Contreras on 03/02/23.
//
/*
 * This is a program for calculate the area of trapeze 
 */

#include <stdio.h> // This library is for the inputs and outputs handling


// This is the main function, all of our code be inside here :)
int main()
{
    /* First I declare the variables that I use for this problem
     * in this case for the problem the variables need to be floats because area usually can't be integer
    */

    float baseMayor, baseMenor, altura, area;

    // Initialize with print a header text
    printf("\n\n Este programa halla el area de un trapecio \n\n");

    // Request a value for the variable "baseMayor"
    printf("Ingrese la base mayor del trapecio: ");
    scanf("%f", &baseMayor);
    // Request a value for the variable "baseMenor"
    printf("Ingrese la base menor del trapecio: ");
    scanf("%f", &baseMenor);
    // Request a value for the variable "altura"
    printf("Ingrese la altura del trapecio: ");
    scanf("%f", &altura);

    /*
     * Next I assigned the math equation to find the trapeze area, and after assignation the machine
     * get the user's values and return the area
     */

    area = (baseMayor + baseMenor) * altura / 2;

    // Here the program return the output
    printf("El area del trapecio es: %f", area);

    return 0;
}