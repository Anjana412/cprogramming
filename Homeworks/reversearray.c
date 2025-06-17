/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void reversearray(int arr[],int n)
{
    int i;
    printf("\nreversed array\n");
    for(i=n-1;i>=0;i--)
    {
    printf("%d",arr[i]);
    }
}

int main()
{
 int arr[5]={1,2,3,4,5};
 int n=5;
 int i;
 printf("array:\n");
 for(i=0;i<n;i++)
 {
 printf("%d",arr[i]);
 }
 reversearray(arr,n);
}
     
 
