#include "stdio.h"

int add_nums(int *a, int *b)
{
    return (*a + *b);
}

void main()
{
    int a = 5;
    int b = 10;

    printf("%d", add_nums(&a,&b));
}