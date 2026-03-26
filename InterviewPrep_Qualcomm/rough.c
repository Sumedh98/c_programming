#include "stdio.h"

// 1. Your own strlen
size_t my_strlen(const char *str);

// 2. Your own memcpy
void *my_memcpy(void *dest, const void *src, size_t n);

// 3. Your own memset
void *my_memset(void *ptr, int value, size_t n);

size_t my_strlen(const char *str)
{
    size_t ret_val = 0;

    while((*str) != '\0')
    {
        ret_val++;
        str++;
    }
    return ret_val;
}

void *my_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    unsigned const char *s = src;
    for(size_t i=0; i< n; i++)
    {
        d[i] = s[i];
    }
    return dest;
}

void *my_memset(void *ptr, int value, size_t n)
{
    *(int *)ptr = value;
}

int main()
{
    const char name[] = "Sumedh";

    size_t val = my_strlen(name);

    printf("%zu", val);



    return 0;
}