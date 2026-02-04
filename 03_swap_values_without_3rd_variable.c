#include "stdio.h"

void main(void)
{
    int a=10;
    int b=15;

    a = a + b;
    b = a-b;
    a = a-b;

    printf("a:%d b:%d", a,b);
}