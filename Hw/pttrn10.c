#include<stdio.h>

int main()
{
    int n=4,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=2*(n-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=2*(n-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}