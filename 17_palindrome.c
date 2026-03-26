#include "stdio.h"

void check_palindrome(int num)
{
    int tmp = num;
    int rev_num = 0;

    while(tmp)
    {
        rev_num = (rev_num*10) + (tmp%10);
        tmp = tmp/10;
    }

    if(rev_num == num)
    {
        printf("its palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}

void main()
{
    int num = 12345;

    check_palindrome(num);
}