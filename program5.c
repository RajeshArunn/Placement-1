//sum of digits
#include<stdio.h>
int main()
{
    int n=234,r,sum;
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("%d",sum);
}

