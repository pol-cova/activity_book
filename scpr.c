//
// Created by Paul Contreras on 04/02/23.
//
#include <stdio.h>

#include <stdlib.h>

int main(void)

{

    int value,square;

    printf("Give me a number and I will square it!\n");

    scanf("%d", &value);



    square = value * value;



    printf("You've given %d\n",value);

    printf("The squared value is %d\n",square);



    system("pause");



    return 0;

}