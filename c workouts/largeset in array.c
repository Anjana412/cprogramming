#include <stdio.h>

int main()
{    
    int a[5]={3,7,9,5,1};
    int max=a[0];
    int i;
    for(i=0;i<5;i++)
    {
        if(a[i]>a[max])
        {
            max=a[i];
        }

    }
            printf("gratest number is:%d",max);
}