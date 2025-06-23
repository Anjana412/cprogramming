
#include <stdio.h>

int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int i;
    for(i=0;i<9;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d \n",a[i]);
        }
    }
}
