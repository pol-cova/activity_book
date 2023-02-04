//
// Created by Paul Contreras on 03/02/23.
//

/*
 * ¿Cuál es el valor de las variables i  y  j después de correr el siguiente fragmento de código
int i, j;
i = 4;
j = 2 * i++;
i = 2 * --j;
 * This code the thing that do is show how the position that we put the increment or decrement changes the output
 */

#include <stdio.h> // This library is for the inputs and outputs handling

// This is the main function, all of our code be inside here :)
int main() {

    // First I declare the variables that I use for this problem in this case i and j
    int i,j;

    // Secondly I assigned a value for variable i -> 4
    i = 4;

    // In addition, I assigned a value for variable j -> 2 * i++
    j = 2 * i++;

    /* How you can see I put the one-increment by i in to right side so this indicates that
     * the machine do the part 2 * i and then increments once time the variable i
     * You can see when I print the output from the value of j variable.
    */

    printf("El valor de la variable j es: %d \n", j); // As you can see now the value for j is 8, because 2 * 4 = 8

    // Now I assigned a new value for variable i, this value is 2 * --j

    i = 2 * --j;

    /* How you can see I put the one-decrement by j in to left side so this indicates that
     * the machine decrement first once j and then multiply by 2 the variable
     * You can see when I print the output from the value of j variable.
    */

    printf("El valor de la variable i es: %d \n", i); // As you can see the output 14, because first 8-1 and then 2 * 7




    return 0;
}
