#include "stdio.h"

void main()
{
    int array[5] = {20,2,1,4,5};
    int largest = -1;
    int second_largest = -1;

    for(int i=0; i<5; i++)
    {
        if(array[i] > largest)
        {
            second_largest = largest;
            largest = array[i];
        }
        else if(array[i] > second_largest && array[i] != largest)
        {
            second_largest = array[i];
        }
    }

    printf("Largest element is %d\nSecond largest element is %d\n", largest, second_largest);
}