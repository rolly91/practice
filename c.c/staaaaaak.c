#include<stdio.h>
int top= -1;
int maxsize=8;
int stack[8];
int is_empty()
{
    if(top=-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_full()
{
    if(top==maxsize)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek()
{
    return stack[top];
}
int push(int data)
{
    if(! is_full())
    {
        top=top+1;
        stack[top]=data;
    }
    else
    {
        printf("could not insert stack is full");
    }
}
int pop()
{
    int data;
    if(!is_empty())
    {
        data=stack[top];
        top=top-1;
        return data;

    }
    else
    {
        printf("could not retrive data stack is empty");
    }
}
int main()
{
    push(9);
    push(7);
    push(6);
    push(4);
    push(5);
    push(2);
    push(1);
    push(3);
    printf("elements at top of the stack ::%d\n",peek());
    printf("ëlements\n");
    while(!is_empty())
    {
        int data = pop();
        printf("%d\n",data);
    }
    printf("stack full:%s\n",is_full()?"true":"false");
    printf("stack empty:%s\n",is_empty()?"true":"false");
    return 0;
}
