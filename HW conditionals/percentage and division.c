#include <stdio.h>

int main()
{
    int roll=784,phy=70,chemi=80,ca=90,total;
    float percentage;
    char name[20]="james";
    
    printf("Roll No:%d\n",roll);
    printf("Name of Student: %s\n",name);
    printf("Marks in Physics:%d\n",phy);
    printf(" Marks in Chemistry:%d\n",chemi);
    printf("Marks in Computer Application:%d\n",ca);
    total=phy+chemi+ca;
    percentage=total/3.0;
    printf("Total Marks=%d\n",total);
    printf("Percentage=%f\n",percentage);
    if(percentage>=60)
    {
        printf("Division=First\n");
    }
    else if(percentage>=50)
    {
        printf("Division=Second\n");
    }
    else if(percentage>=40)
    {
        printf("Division=Third\n");
    }
    else
    {
        printf("Division=Fail\n");
    }

}
