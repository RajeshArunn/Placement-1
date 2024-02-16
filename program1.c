//Least 3 products in array
#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Lowest product producing 3 numbers: ");
    for(int i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }
}
