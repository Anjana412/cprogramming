#include <stdio.h>
int main() 
{
   char g;
    printf("Enter the grade (E, V, G, A, F): ");
    scanf(" %c", &g);
    switch (g) 
    {
        case 'E':
            printf("Excellent\n");
            break;
        case 'V':
            printf("Very Good\n");
            break;
        case 'G':
            printf("Good\n");
            break;
        case 'A':
            printf("Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade entered.\n");
    }

    
}

