/*Ángel Ricardo León Flores 
Ejercicio 2 Clase 
Cálculo de cambio a recibir*/

#include <stdio.h>

int main()
{
  //Declarar variables
  int c, t, p;

  //Leer variables
  printf("Ingresar el valor total de la cuenta ");
  scanf("%i", &t);
  printf("Ingresar el valor del pago de la cuenta ");
  scanf("%i", &p);

  //Cálculo del cambio a recivir
  c = p - t;

  //Imprimir cambio 
  printf("El cambio será de $%i.\n", c);

  //Fin 
  return 0;
}
