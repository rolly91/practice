#include<stdio.h>
int main()
{
   int x;
   printf("Enter a number: ");
   scanf("%d", &x);
   (x&1)?printf("Odd"):printf("Even");
   return 0;
}
