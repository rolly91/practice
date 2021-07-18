#include<stdio.h>
int maxsize=8;
int stack[8];
int top = -1;
int is_empty()
{
    if(top==-1)
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
        printf("could not retrive data,stack is empty\n");
    }
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
        printf("could not insert data stack is full\n");
    }
}
int main()
{
    push(3);
    push(9);
    push(8);
    push(6);
    push(1);
    push(12);
    push(5);
    push(4);
    printf("elements at top of the stack ::%d\n",peek());
    printf("ëlements\n");
    while(!is_empty())
    {
        int data=pop();
        printf("%d\n",data);
    }
    printf("stack full:%s\n",is_full()?"true":"false");
    printf("stack empty:%s\n",is_empty()?"true":"false");
    return 0;

}
