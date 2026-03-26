#include "stdio.h"

void main()
{
    int *ptr =NULL;
    int num = 5;

    ptr = &num;

    *ptr = 15;

    printf("%d",num);
}