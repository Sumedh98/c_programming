#include "stdio.h"

void main(void)
{
    int num=4;

    for(int i=2; i<num; i++)
    {
        if((num%i)==0)
        {
            printf("It is not a prime number\n");
            return;
        }
    }

    printf("It is a prime number\n");

}