#include "stdio.h"

void main (void)
{
    int a = 20;
    int b = 5;
    int c = 1;
    int largest = 0;

    if(a>b)
    {
        if(a>c)
        {
            largest = a;
        }
        else
        {
            largest = c;
        }
    }
    else if (b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    printf("Largest number: %d\n", largest);
}

/*
// Another simpler method

void main(void)
{
    int a = 5;
    int b = 10;
    int c = 100;

    if((a>b)&&(a>c))
    {
        largest = a;
    }
    else if((b>a) && (b>c))
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    printf("Largest number: %d\n", largest);
}
    */