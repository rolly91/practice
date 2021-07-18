#include<stdio.h>
main()
{
    int a[10],i,temp;
    printf("enter array elements");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    for(i=0; i<10; i++)
    {
        if(a[i]<a[i+1])
        {
            printf("array is sorted");
            return ;
        }

    }
    printf("array is not sorted");


}
