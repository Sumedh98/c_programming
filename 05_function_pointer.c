#include <stdio.h>

int add(int a, int b);

int add(int a, int b)
{
    return (a+b);
}

int main()
{
    int (*func_ptr)(int, int);
    
    func_ptr = &add;
    
    printf("%d",func_ptr(5,5));
    return 0;
}