#include "stdio.h"

void main()
{
    int array[5] = {0,1,2,3,4};
    int reverse_array[5];

    for(int i=0; i<5; i++)
    {
        reverse_array[4-i] = array[i];
    }

    for(int i=0; i<5; i++)
    {
        printf("%d", reverse_array[i]);
    }
}