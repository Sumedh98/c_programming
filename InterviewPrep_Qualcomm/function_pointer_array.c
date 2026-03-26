#include "stdio.h"

int add(int a, int b)
{
    return(a+b);
}

int sub(int a, int b)
{
    return(a-b);
}

int main()
{
    // /* Normal function pointer */
    // int (*func_ptr)(int,int);

    // func_ptr = add;

    // printf("%d", func_ptr(2,2));

    // /* function pointer arrray with initialization*/
    // int (*func_ptr_arr[2])(int,int) = 
    // {
    //     add,
    //     sub
    // };

    /* Function pointer array and init later*/
    int (*func_ptr_arr[2])(int,int);

    func_ptr_arr[0] = add;
    func_ptr_arr[1] = sub;

    printf("%d\n", func_ptr_arr[0](2,2));
    printf("%d\n", func_ptr_arr[1](2,2));

    return 0;
}