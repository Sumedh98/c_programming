#include "stdio.h"

void main()
{
    int size = 5;

    for(int i=1; i<=size; i++)
    {
        for(int j=1; j<=size-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k< 2*i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}