#include <stdio.h>

int main()
{
   float cost,selling,amt;
   printf("enter the cost");
   scanf("%f",&cost);
   printf("enter the selling price");
   scanf("%f",&selling);
   if(selling>cost)
   {
       amt=selling-cost;
       printf("profit=%f\n",amt);
   }
   else if(cost>selling)
   {
       amt=cost-selling;
       printf("loss=%f\n",amt);
   }
   else
   {
       printf("no profit no loss\n");
   }
}
