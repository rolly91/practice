#include<stdio.h>
main()
{
    int a[10],i,search;
    printf("enter elements");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements are");
    for(i=0; i<10; i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    printf("enter element for searching");
    scanf("%d",&search);
    for(i=0; i<10; i++)
        if(search==a[i])
        {
            printf("element found %d",i);
            break;
        }
    if(i==10)
        printf("element not found");





}
