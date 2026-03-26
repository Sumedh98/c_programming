#include "stdio.h"

int main()
{
    int size = 5;

    // Flame (upper triangle)
    // for(int i=1; i<=size; i++) {
    //     for(int j=i; j<size; j++)   printf(" ");
    //     for(int k=1; k<=2*i-1; k++) printf("*");
    //     printf("\n");
    // }

    // for(int i=1; i<=3; i++)
    // {
    //     for(int j=1; j<size; j++) printf(" ");
    //     printf("|\n");
    // }
    for(int i =1; i<=size; i++)
    {
        for(int j=i; j<size; j++) printf(" ");
        for(int k=1; k<=i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
    
    }
    for(int i=0; i<3; i++)
        {
            for(int j=0; j<size-1; j++)
            {
                printf(" ");
            }
            printf("|\n");
        }
    
    return 0;
}


