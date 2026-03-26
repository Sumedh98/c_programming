#include "stdio.h"


void reverseString(char *str)
{
    char *start= str;
    char *end = str;
    char tmp;

    while((*end) != '\0')
    {
        end++;
    }
    end--;

    while(end > start)
    {
        tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }

}

int main()
{
    char str[]= "Sum";

    reverseString(str);

    printf("%s", str);


    return 0;
}