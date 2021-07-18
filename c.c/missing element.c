#include<stdio.h>
main()
{
    int a[10],i,j,sum=0,sum1=0;
    printf("enter values");
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);

    for(i=0; i<10; i++)
        sum+=a[i];
    printf("sum of input numbers is %d \n",sum);


    for(j=1; j<12; j++)
        sum1+=j;
    printf("sum of 1 to 11 is %d\n",sum1);
    printf("missing number is %d ",sum1-sum);




}
