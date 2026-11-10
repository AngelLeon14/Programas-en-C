/*León Flores Ángel Ricardo 
Ejercicio. Clase 
DNI*/

#include <stdio.h>
int verify(int dni);
void main()
{
  int dni, ver; 
  
  printf("Programa de verificación de DNI\n");
  printf("Introduzca su número de DNI: ");
  scanf("%d", &dni); 

  //Validación 
  do
  {
    ver = verify(dni); 
    if (ver == 0)
    {
      printf("El número de DNI es incorrecto.\n");
      printf("Escribe un número válido: ");
      scanf("%d", &dni);
    }
  } 
  while (ver == 0);
}

int verity(int dni)
{
  int res; 
  if(dni >= 10000000 && dni <= 99999999)
  {
    res = 1;
  }
  else
  {
    
  }
}
