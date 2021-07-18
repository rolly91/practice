#include<stdio.h>
int (*s)(int *,int *);
swap(int *a ,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

main()
{

    int x,y;
    printf("enter two values");
    scanf("%d %d",&x,&y);
    s=swap;
    printf("values after swapping are : ", s(&x, &y));
    printf("x=%d, y=%d", x, y);
}
