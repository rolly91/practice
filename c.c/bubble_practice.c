#include<stdio.h>
main()
{
    int n,i,a[12];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubble_sort(a,n);
    printf("sorted elements are");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
}
