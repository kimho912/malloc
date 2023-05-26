#include <stdlib.h>
#include <stdio.h>

int main()
{
  printf("Running test 8 to test realloc and malloc\n");

    int* array_ptr = (int*) malloc(3 * sizeof(int));
    array_ptr = (int*) realloc(array_ptr, 5 * sizeof(int));
    
    free(array_ptr);


  return 0;
}
