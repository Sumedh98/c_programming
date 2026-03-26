#include "stdio.h"

// void main()
// {
//     char *c = "name";

//     c[0] = "h";
// }

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {
    // Declare a function pointer 'op' that can 
    int (*op)(int,int);
    // point to either add or sub
    op = add;
    // Then call add using that pointer
    printf("%d",op(2,2));
}