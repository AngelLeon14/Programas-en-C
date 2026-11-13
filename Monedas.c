/*León Flores Ángel Ricardo 
Ejercicio Clase 
Monedas*/


#include <stdio.h>
void main()
{
  int m50 = 0, m20 = 0, m10 = 0, m5 = 0, res, cant;
  float cant2;
  printf("Dame la cantidad a devolver: ");
  scanf("%f", &cant);
  cant = cant2 * 100;
  m50 = cant / 50;
  res = cant % 50;
  if(res != 0)
  {
    m20 = res / 20; 
    res = res % 20;
    if(res != 0)
    {
      m10 = res / 10;
      res = res % 10;
      if(res != 0)
      {
        m5 = res / 5;
        printf("Se devuelven %i de 50c, %i de 20c, %i de 10c y %i de 5c.\n", m50, m20, m10, m5);
      }
      else
      {
        printf("Se devuelven %i de 50c, %i de 20c, %i de 10c y %i de 5c.\n", m50, m20, m10, m5);
      }
    }
    else 
    {
      printf("Se devuelven %i de 50c, %i de 20c, %i de 10c y %i de 5c.\n", m50, m20, m10, m5);
    }
  }
  else 
  {
    printf("Se devuelven %i de 50c, %i de 20c, %i de 10c y %i de 5c.\n", m50, m20, m10, m5);
  }
}

//Problema con funciones 
