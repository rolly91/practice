#include<stdio.h>
main()
{
    int a[10],i,j,find=0,temp;
    printf("enter array elements");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
    printf("dublicate elements are");
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<9; j++)
        {
            if(a[i]==a[j])
            {
                printf("%d",a[i]);
            }

        }
    }
    for(i=0; i<10; i++)
    {
        find^=a[i];
    }
    printf("alone element is %d\n",find);
    for(i=0; i<10; i++)
    {
        if(a[i]>a[i+1])
        {
            printf("array is not sorted in assending order");
            return;
        }
    }
    printf("array is sorted");
     for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++){
    printf("%d",a[i]);

}
}




