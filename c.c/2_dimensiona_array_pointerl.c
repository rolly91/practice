#include<stdio.h>
main()
{
    int a[3][3],i,j,*x,sum=0;
    printf("enter elements");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);

    x=&a[0][0];
    printf("elements are");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            printf("%d ",*(x+i*3+j));
        printf("\n");
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            sum+=a[i][j];
    }
    printf("sum is %d", sum);
}
