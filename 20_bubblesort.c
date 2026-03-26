#include "stdio.h"

void bubblesort(int array[], int n)
{
    int tmp=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}

void main()
{
    int array[5] = {5,4,3,2,1};
    int n = (sizeof(array)/sizeof(array[0]));

    bubblesort(array,n);

    for(int i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
}