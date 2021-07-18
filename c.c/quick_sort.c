#include<stdio.h>
quick_sort(int number[25],int first,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        i=first;
        j=last;
        pivot=first;
        while(i<j)
        {
            while(number[i]<=number[pivot]&&number[last])
                i++;
            while(number[j]>number[pivot])
                j--;
            if(i<j)
            {
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quick_sort(number,first,j-i);
        quick_sort(number,j+1,last);
    }
}
int main()
{
    int i,count,number[25];
    printf("how many elements you wants to enter");
    scanf("%d",&count);
    printf("enter elements:");
    for(i=0;i<count;i++)
        scanf("%d",&number[i]);
        quick_sort(number,0,count-1);
        printf("order of sorted array :");
        for(i=0;i<count;i++)
            printf("%d\n",number[i]);
        return 0;

}
