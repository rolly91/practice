#include<stdio.h>
#include<stdlib.h>
int maxsize=6;
int stack[7];
int top=-1;

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
        printf("could not retrive data stack is empty");
    }
}

int push(int data)
{
    if(!is_full())
    {
        top=top+1;
        stack[top]=data;
    }
    else
    {
        printf("could not push data stack is full");
    }
}
int main()
{

    push(9);
    push(49);
    push(19);
    push(8);
    push(5);
    push(6);
    push(69);
    push(29);
    printf("top value of stack is %d\n",peek());
    printf("elements are\n");
    while(!is_empty())
     {
        int data=pop();
        printf("%d\n",data);
    }

    printf("stack full:%s\n",is_full()?"true":"false");
    printf("stack empty:%s\n",is_empty()?"true":"false");
    return 0;

}
