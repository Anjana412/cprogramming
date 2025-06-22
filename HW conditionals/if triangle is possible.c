#include <stdio.h>

int main()
{
    int a1,a2,a3,sum;
    printf("enter the 3 angles:");
    scanf("%d %d %d",&a1,&a2,&a3);
    sum=a1+a2+a3;
    if(sum==180&&a1>0&&a2>0&&a3>0)
    {
        printf("triangle is possible");
    }
    else
    {
        printf("triangle is not possible");
    }
}
