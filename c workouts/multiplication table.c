#include <stdio.h>

int main()
{
    int f,i;
    printf("enter a number");
    scanf("%d",&f);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",f,i,f*i);
    }
}