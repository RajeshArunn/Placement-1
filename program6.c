#include<stdio.h>
int main()
{
    int n=7,spaces,plus,i,j;
    for(i=1;i<n;i++)
    {
        for(spaces=n-1;spaces>i;spaces--)
        {
            printf("  ");
        }
        for(plus=1;plus<=2*i-1;plus++)
        {
            printf("+ ");
        }
        printf("\n");
    }
}
