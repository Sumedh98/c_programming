#include "stdio.h"

int add_nums(int *a, int *b)
{
    return(*a + *b);
}

void main()
{
    int (*func_ptr)(int *, int *);
    func_ptr = add_nums;

    int a = 10;
    int b = 15;


    printf("%d", func_ptr(&a, &b));
}