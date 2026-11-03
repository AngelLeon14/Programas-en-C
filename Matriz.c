/*León Flores Ángel Ricardo
Ejercicio. Clase 
Matriz*/

#include <stdio.h>
void main()

{
  int arr [3][3]; 
  int num = 1; 

  //Llenar matriz
  for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
        {
          arr[i][j] = num;
          num = num + 1; 
        }
    }

  //Imprimir el arreglo
  printf("El arreglo final es: \n");
  for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
        {
          printf("%d ", arr[i][j]); 
        }
      printf("\n");
    }
}
