#include "stdio.h"
#include "math.h"

void main()
{
    int bin = 1111;
    int ans = 0;
    int i = 0;

    while(bin != 0)
    {
        ans = ans + (bin%10)*pow(2,i);

        bin = bin/10;
        i++;
    }

    printf("%d", ans);
}