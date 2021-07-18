#include<stdio.h>
main()
{
    int i,j,temp,count,number[25];
    printf("how many elements you are going to enter");
    scanf("%d",&count);
    printf("enter %d elements :",count);
    for(i=0;i<count;i++)
    scanf("%d",&number[i]);
    for(i=0;i<count;i++){
        for(j=i+1;j<count;j++)
        {
            if(number[i]>number[j])
            {
                temp=number[i];
                number[i]=number [j];
                number[j]=temp;
            }
        }
    }
    printf("sorted elements sre");
    for(i=0;i<count;i++)
        printf("%d\n",number[i]);
    return 0;
}
