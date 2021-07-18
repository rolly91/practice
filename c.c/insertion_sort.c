#include<stdio.h>
main()
{
    int i,j,temp,n,number[20];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&number[i]);
    for(i=1;i<n;i++)
    {
        temp=number[i];
        j=i-1;
        while((temp<number[j]&&(j>=0)))
        {
            number[j+1]=number[j];
            j=j-1;
        }
        number[j+1]=temp;
    }
    printf("sorted elements are");
    for(i=0;i<n;i++)
    printf("%d\n",number[i]);

}
