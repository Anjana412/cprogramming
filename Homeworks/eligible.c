#include <stdio.h>

int main()
{
    int math, physics, chemistry, total, totalof2;
    printf("enter the mark obtained in maths:");
    scanf("%d",&math);
    printf("enter the mark obtained in physics:");
    scanf("%d",&physics);
    printf("enter the mark obtained in chemistry");
    scanf("%d",&chemistry);
    
    total=math+physics+chemistry;
    totalof2=math+physics;
    
    
    if(math>=65&&physics>=55&&chemistry>=500&&total>=190||totalof2>=140)
    {
        printf("candidate is eligible");
    }
    else
    {
        printf("candidate is not eligible");
    }
    
}