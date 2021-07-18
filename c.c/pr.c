#include<stdio.h>
main()
{
    int i,j,n,a[15][15],b[15][15],c[15][15],result;
    printf("enter size ");
    scanf("%d",&n);
    printf("enter first array elements");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter second array elements");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }

     }
    for(i=0; i<3; i++)
    {
        result+=a[i][0]*((a[(i+1)%3][1]*a[(i+2)%3][2]) - (a[(i+2)%3][1]*a[(i+1)%3][2]));
    }
    printf("\nThe modulus of the matrix is: %d\n\n",result);
}


