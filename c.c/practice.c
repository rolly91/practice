#include<stdio.h>
 main()
{
    int i,n,j;
    printf("enter pattern size");
    scanf("%d",&n);
    for(i=n; i>=0; i--)
    {
        for(j=n; j>=i; j--)
        {
            printf("%c",65+i);
        }
        printf("\n");
    }


}

