#include "stdio.h"
#include "stdbool.h"

#define MAX 5

int stack[MAX];

int top = -1;

bool is_empty()
{
    return(top == -1);
}

bool is_full()
{
    return (top>=MAX-1);
}

bool push(int data)
{
    if(is_full())
    {
        printf("Stack is full");
        return 0;
    }
    else
    {
        top ++;
        stack[top] = data;
        return 1;
    }
}

int pop()
{
    if(is_empty())
    {
        printf("Stack is empty. Nothing to pop");
    }
    else
    {
        int data = stack[top];
        top--;
        return data;
    }
}

void main()
{
    push(5);
    push(10);
    push(15);
    push(13);
    push(91);
    printf("\n%d",pop());
}