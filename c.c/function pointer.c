#include<stdio.h>
 int (*f)(int,int);
sum(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}
main()
{
    int x,y;
    printf("enter two values");
    scanf("%d %d",&x,&y);
       f=sum;

    printf("%d",(*f)(x,y));


}
