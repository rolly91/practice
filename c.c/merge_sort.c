#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[]={10,3,12,32,7,20,4};
    int size=sizeof(array)/sizeof(array[0]);
    printf("the array is :\n");
    print_array(array,size);
    merge_sort(array,0,size-1);
    printf("sorted array is");
    print_array(array,size);
    return 0;
}
void print_array(int array[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",array[i]);

    }
}
void merge_sort(int array[],int l,int h)
{
    int mid;
    if(l<h){
        mid=(l+h)/2;
        merge_sort(array,l,mid);
        merge_sort(array,mid+1,h);
        merge(array,1,mid,h);
        }
}

void merge(int array[],int l,int mid,int h)
{
    int i,j,k;
    int n1=mid-l+1;
    int n2=h-mid;
    int left[n1],right[n2];
    for(i=0;i<n1;i++)
    {
        left[i]=array[l];
        l++;
        }
        for(j=0;i<n2;i++)
        {
            array[j]-array[l];
            l++;
        }
        i=0;
        j=0;
        k=l;
        while(i<=n1&&j<=n2)
        {
            if(left[i]<=right[j])
            {
                array[k]=left[i];
                i++;
            }
            else{
                array[k]=right[j];
                j++;

            }
            k++;

        }
        while(j<=n1)
        {
            array[k]=left[i];
            j++;
            k++;
        }
        while(j<=n2)
        {
            array[k]=right[j];
            j++;
            k++;
        }
}
