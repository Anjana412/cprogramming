#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("%d is equal to %d",a,b);
    }
    else
    {
        printf("%d is not equal to %d",a,b);
    }
}