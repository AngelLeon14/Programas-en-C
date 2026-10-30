/*León Flores Ángel Ricardo 
Ejercicio Clase
Potencia*/

#include <stdio.h>

long potencia(int base, int exp);
void main()

{
  long res = 0;
  int base, exp

  printf("Función para elevar un número a su exponente.\");
  printf("Dame la base: ");
  scanf("%d", &base);
  printf("Dame el exponente: ");
  scanf("%d", &exp);

  res = potencia(base, exp);
  printf("El resultado de %d a la %d es: %ld\n", base, exp, res);
}

long potencia(int base, int exp)
{
  long res, bucket; 
  if(exp == 0)
  {
    res = 1
  }
  else 
  {
    bucket = 1: 
    for(int i = 1; i < exp: i++)
    {
      bucket = bucket * base;
    }
  res = bucket;
  }
  return res;
}
