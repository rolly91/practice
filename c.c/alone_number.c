#include<stdio.h>
main()
{
    int a[11],i,find=0;
    printf("enter elements");
    for(i=0;i<11;i++)
        scanf("%d",&a[i]);
    printf("elements are");
     for(i=0;i<10;i++){
     printf("%d\n",a[i]);
     }
     for(i=0;i<11;i++)
     find^=a[i];

        printf("alone number is %d",find);


}
