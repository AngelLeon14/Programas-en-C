/*Ángel Ricardo León FLores 
Ejercicio 1 Clase
Volumen*/

#include <stdio.h>
int main()
{
  //Declaración de variables
  int v, a, b, c;

  //Leer los valores
  printf("Introducir valor del lado a: ");
  scanf("%i", &a);
  printf("introducir valor del lado b: ");
  scanf("%i", &b);
  printf("Introducir valor del lado c: ");
  scanf("%i", &c);

  //Calcular 
  v = a * b * c;

  //Imprimir salida 
  printf("El volumen de la figura es de %i metros cúbicos\n", v);

  //Fin 
  return 0;
}

  
