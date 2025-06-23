/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5]={2,4,6,1,9};
    int i,k,found=0;
    printf("enter the number to be searched");
    scanf("%d",&k);
    for(i=0;i<5;i++)
    {
        if(k==arr[i])
        {
        found=1;
        break;
        }
    }
    if(found==1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
    
    
}
