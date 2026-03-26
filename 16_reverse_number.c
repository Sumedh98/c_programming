#include"stdio.h"
#include "math.h"

int recursive_reverse(int n, int ans)
{
    if(n==0)
    {
        return ans;
    }
    ans = ans*10 + n%10;
    return(recursive_reverse(n/10, ans));
}

void main()
{
    // int num = 12345;
    // int rev_num=0;
    // int count=0;
    // int tmp;

    // tmp= num;
    // while(tmp)
    // {
    //     tmp = tmp/10;
    //     count++;
    // }

    // for(int i=count; i>0; i--)
    // {
    //     rev_num = rev_num + (num%10)*pow(10,i);
    //     num = num/10;
    // }

    // printf("%d",rev_num);

    //simpler recursive way
    int num = 12345;

    printf("%d", recursive_reverse(num,0));

    

}