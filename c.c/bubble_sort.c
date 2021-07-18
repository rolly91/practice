#include<stdio.h>
bubble_sort(int [],int);
main()
{
    int n,a[20],i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    printf("the array is\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
}
bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

}
