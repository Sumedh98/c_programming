#include "stdio.h"
#include <math.h>

void main()
{
    int num = 1010102;
    int ans = 0;
    int i = 0;

    while(num != 0)
    {
        if(num%10 == 0)
        {
            ans = ans + (1 * pow(10,i));
        }
        else
        {
            ans = ans + ((num%10)*pow(10,i));
        }
        num = num/10;
        i++;
    }

    printf("%d", ans);
}