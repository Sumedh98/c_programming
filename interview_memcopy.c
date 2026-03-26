// Implement your own version of memcpy(). The function signature should be void *my_memcpy(void *dest, const void *src, size_t n).mplement your own version of memcpy(). The function signature should be void *my_memcpy(void *dest, const void *src, size_t n).

#include "stdio.h"


void *my_memcpy(void *dest, const void *src, size_t n)
{
    char *d = (char *)dest;
    const char *s = (const char *)src;

    for(size_t i=0; i<n; i++)
    {
        d[i] = s[i];
    }

    return dest;
}

void main()
{
    int dest;
    int source=10;
    my_memcpy(&dest, &source, sizeof(source));

    printf("%d", dest);

}