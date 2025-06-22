#include <stdio.h>

int main()
{
   int i,j,s;
   for(i=5;i>=1;i--)
   {
       for(s=1;s<=5-i;s++)
       {
           printf(" ");
       }
       for(j=1;j<=(2*i-1);j++)
       {
           if(j==1||j==(2*i-1)||i==5)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }   
        printf("\n");
    }
}