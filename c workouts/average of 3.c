/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a, b, c;
    
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int avg = (a + b + c) / 3;
    
    printf("Average of 3 numbers is %d\n", avg);
}
