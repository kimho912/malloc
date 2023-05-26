#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("Running test 5 to test reuses\n");

  char * ptr1 = ( char * ) malloc ( 65535 );
  free (ptr1);

  char * ptr_array[1000];
  int i;
  for ( i = 0; i < 1000; i++ )
  {
    ptr_array[i] = ( char * ) malloc ( 10 ); 
    
    ptr_array[i] = ptr_array[i];
  }

  char * ptr3 = ( char * ) malloc ( 20000 );

  free( ptr3 );

  return 0;
}
