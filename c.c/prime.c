#include<stdio.h>
main()
{
    int n,i;
    printf("enter a number to check");
    scanf("%d",&n);
    for(i=2; i<=n-1; i++)
        if(n%i==0)
            break;
    if(i==n)
        printf("is a prime number");
    else
        printf("is not a prime number");
}
