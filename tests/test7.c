#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Running test 7 to test coalesces allocted by calloc\n");
    int* cal_array1;
    cal_array1 = (int*)calloc(1024, sizeof(int));
    

    int* cal_array2;
    cal_array2 = (int*)calloc(1024, sizeof(int));
    free(cal_array1);
    free(cal_array2);

    return 0;
}
