/*Ángel Ricardo León Flores 
Ejercicio 3 Clase 
Promedio*/

#include <stdio.h>
void main()
{

  //Declarar variables
  float s = 0, c, p;
  int i;

  //Cálculo del promedio 
  for(i = 0; i < 4; i++)
  {
    //Leer calificaciones
    printf("Ingresar la calificación #%i: ", (i + 1));
    scanf("%f", &c);

    //Cálculo de la suma
    s = s + c; 
  }

  //Cálculo del promedio 
  p = s / i; 

  //Imprimir promedio 
  printf("El promedio de %i calificaciones es de %f.\n", i, p);
}
