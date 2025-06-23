#include <stdio.h>
int sum(int x);
int sum(int x)
{
    if(x>0)
    {
        return x+sum(x-1);
    }
    else 
    {
        return 0;
    }
}
int main()
{
    int a;
    a=sum(10);
    printf("result=%d",a);
}
    

