/** Este es mi primer programa en C **/

/** Voy a estudiar la estructura de un programa en C **/

#include <stdio.h>

#include <stdlib.h>

int main()

{

  int Mi_entero;
  double Mi_double;
  char Mi_char;

  Mi_entero = 5;

  float Mi_float = 7.9;

Mi_char  = 'a' ;

printf("\n \n Mi_entero=%d, tamaNo= %lu\n\n", Mi_entero, sizeof(int));

printf("\n \n Mi_float=%f, tamaNo= %lu\n\n", Mi_float, sizeof(float));

printf("\n \n Mi_char=%d, tamaNo= %lu\n\n", Mi_char, sizeof(char));

// system("pause");


return (1);

}