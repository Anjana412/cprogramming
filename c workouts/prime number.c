/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,n,primeflag;
   printf("enter the number");
   scanf("%d",&n);
   if(n<=1)
   {
       primeflag=0;
   }
   else
   {
   for(i=2;i<=n/2;i++)
   {
      if(n%i==0)
      {
       primeflag=0;   
       break;
      }
   }
   }
   if(primeflag)
   {
       printf("prime number");
   }
   else
   {
       printf("not prime");
   }
   
}
