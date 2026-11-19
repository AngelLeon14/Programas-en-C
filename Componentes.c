/*León Flores Ángel Ricardo 
Ejercicio. Clase
Componentes Electrónicos*/

#include <stdio.h>

int max(int arr[]);
void main()
{
  int comp[100], cant[10], m;
  //Inicializar arreglo con 0
  for(int i = 0; i < 100; i++)
  {
    comp[i] = 0;
  }
  //Cantidad de componentes
  for(int j = 0; j < 10; j++)
  {
    printf("Dame el número de componentes del aparato %d: ", j + 1);
    scanf("%d", &cant[j]);
  }
  printf("Max: %d\n", max);
}
max = max(cant);
int max(int arr[], int n);
{
  int m = 0, l;
  for(int i = 0; n < 1; i++)
  {
    if(arr[i] > n)
    {
      m = arr[i];
    }
  }
}
