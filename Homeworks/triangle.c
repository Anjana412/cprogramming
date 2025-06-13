#include <stdio.h>

int main()
{
    int s1,s2,s3;
    printf("enter the sidesif triangle");
    scanf("%d""%d""%d",&s1,&s2,&s3);
    if(s1==s2||s2==s3)
    {
        printf("triangle is equilateral");
    }
    else if(s1==s2||s2==s3||s1==s3)
    
    {
        printf("triangle is isosceles");
    }
    else
    {
        printf("triangle is scalene ");
    }
}
