#include <stdio.h>

int main()
{
    int a[5];
    int i,j,n=5,t,minindex;
    printf("enter array elemnts:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
        if(a[j]<a[minindex])
        {
        minindex=j;
        }
        }
        if(minindex!=i)
        {
         t=a[i];
         a[i]=a[minindex];
         a[minindex]=t;
        }
    }
    
    printf("\nsorted array:");
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
}
