#include<stdio.h>
# include<stdlib.h>

void print_array(int array[],int size)
{
    int i,k;
    for(i=0; i<size; i++)
    {
        printf("%d\n",array[i]);

    }
    printf("sorted array is");
    for(k=0; k<size; k++){
         printf("%d\n",array[k]);
    }
}
void mergesort(int array[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(array,l,mid);
        mergesort(array,mid+l,h);
        merge(array,l,mid,h);
    }
}
void merge(int a[],int l,int mid,int h)
{
    int i,j,k, b[10];
    i=l;
    j=mid+1;
    k=l;
    while(i<mid&&j<h)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=h)
        {
            b[k]=a[j];
            j++;
            k++;

        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
            for(k=l; k<h; k++)
            {
                a[k]=b[k];
            }
        }
    }
}
int main()
{
    int array[]= {10,3,12,32,7,20,4};
    int size=(sizeof(array)/sizeof array[0]);
    printf("the array is :\n");
    print_array(array,size);
    mergesort(array,0,size-1);
    printf("the sorted array is:\n");
    print_array(array,size);
    return 0;
}
