#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("Running test 6 to test if it reuses the memory allocated by calloc\n");

  int* cal_array;

  cal_array = (int*)calloc(2000, sizeof(int));

  free(cal_array);

  char * ptr_array[20];
  int i;
  for ( i = 0; i < 20; i++ )
  {
    ptr_array[i] = ( char * ) malloc ( 300 ); 
    
    ptr_array[i] = ptr_array[i];
  }

  for ( i = 0; i < 20; i++ )
  {
    ptr_array[i] = ( char * ) malloc ( 400 ); 
    
    free(ptr_array[i]);
  }


  return 0;
}