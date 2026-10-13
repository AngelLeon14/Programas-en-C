/*Ángel Ricardo León Flores 
Ejercicio 3 Clase 
Promedio*/

#include <stdio.h>

void main()
{

  //Declaración de variables
  float a, b, c, d, s, p;

  //Leer calificaciones 
  printf("Ingresa la primer calificación: ");
  scanf("%f", &a);
  printf("Ingresa la segunda calificación: ");
  scanf("%f", &b);
  printf("Ingresa la tercer calificación: ");
  scanf("%f", &c);
  printf("Ingresa la cuarta calificación: ");
  scanf("%f", &d);

  //Cálculo de suma y promedio 
  s = a + b + c + d;
  p = s / 4; 

  //Imprimir promedio 
  printf("El promedio es de: %f.\n", p);
}
