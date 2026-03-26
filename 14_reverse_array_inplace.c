#include "stdio.h"

#define ARRAY_SIZE 5

void reverse_array(int array[])
{
    int start = 0;
    int end = ARRAY_SIZE-1;
    int tmp;

    while(start<end)
    {
        tmp = array[end];
        array[end] = array[start];
        array[start] = tmp;
        start ++;
        end --;
    }
}

void main()
{
    int array[ARRAY_SIZE] = {1,2,3,4,5};

    reverse_array(array);

    for(int i=0; i<ARRAY_SIZE; i++)
    {
        printf("%d", array[i]);
    }
    
}