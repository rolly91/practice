#include<stdio.h>
main()
{
    int a[10],n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        selection_sort(a,n);
        printf("sorted elements are");
        for(i=0;i<n;i++)
            printf("%d\n",a[i]);
}
selection_sort(int a[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n;i++){
        k=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[k])
            k=j;
        if(k!=i)
        {
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;

        }
    }
}
