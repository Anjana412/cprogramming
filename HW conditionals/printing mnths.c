#include <stdio.h>

int main()
{
    int mnthnumbr;
    printf("enter a number b/w 1-12:\n");
    scanf("%d",&mnthnumbr);
    switch(mnthnumbr)
    {
        case 1:
        printf("January\n");
        break;
        case 2:
        printf("February\n");
        break;
        case 3:
        printf("March\n");
        break;
        case 4:
        printf("April\n");
        break;
        case 5:
        printf("May\n");
        break;
        case 6:
        printf("June\n");
        break;
        case 7:
        printf("july\n");
        break;
        case 8:
        printf("August\n");
        break;
        case 9:
        printf("September\n");
        break;
        case 10:
        printf("October\n");
        break;
        case 11:
        printf("November\n");
        break;
        case 12:
        printf("December\n");
        break;
        default:
        printf("please enter a number between 1-12");
        break;
        
    }
}
