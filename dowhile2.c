//do while loop
#include<stdio.h>
int main()
{
    int n;
   do
   {
   printf("enter a number :");
   scanf("%d",&n);
   if (n % 7 == 0)
   {
    break;
   }
   
   } while (1);
   printf("user entered a odd number");
   
}
