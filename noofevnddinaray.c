/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int i,evncount,oddcount;
    for(i=0;i<9;i++)
    {
        if(a[i]%2==0)
        {
           evncount++;
        }
        else
        {
          oddcount++;  
        }
        
    }
    printf("number of even number in array: %d\n",evncount);
    printf("number of odd number in array: %d\n",oddcount);
    
}