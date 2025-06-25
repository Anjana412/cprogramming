#include <stdio.h>

int main()
{
    int a[5]={2,7,5,3,9};
    int i,j,n=5,t;
    printf("array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
        if(a[j]>a[j+1])
        {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
        }
        }
    }
    printf("\nsorted array:");
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
}
