#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("Running test 9 to test zero byte\n");

  char * ptr1 = ( char * ) malloc( 0 );

  free( ptr1 );


  return 0;
}
