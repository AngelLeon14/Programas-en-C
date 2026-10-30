/*León Flores Ángel Ricardo 
Ejercicio Clase 
Áreas*/

#include <stdio.h>

int menu(); 
float triangulo(int base, int alt); 
float trapecio(int bma, int bme, alt);
float rectangulo(int base, int altura); 
void main()
{
  int op;
  float res = 0; 

  do
    {
      op = menu();
    }
    while (op < 1 || op > 3);

switch (op)
{
  case 1:
    int base, alt; 
    printf("Dame la base del triángulo: ");
    scanf("%d", &base);
    printf("Dame la altura del triángulo: ");
    scanf("%d", &alt);
    res = triangulo(base, alt);
    break; 
  
}
}
