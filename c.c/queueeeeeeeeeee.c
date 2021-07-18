#include<stdio.h>
int front=-1;
int rear=-1;
int maxsize=9;
int queue[8];
int is_empty()
{
    if(front==-1 && rear==-1)
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
    if(front==maxsize && rear==maxsize)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("peek element is %d",queue[front]);
    }
}
void enqueue()
{
    int data;
    printf("enter elements");
    scanf("%d",&data);
    if(is_empty())
    {
        front=0;
        rear=0;
        queue[rear]=data;
    }
    else if(is_full())
    {
        printf("overflow");
    }
    else
    {
        rear=rear+1;
        queue[rear]=data;
    }

}
void dequeue()
{
    int item;
    if(is_empty())
    {
        printf("underflow");
    }
    item = queue[front];
    if(front == rear)
    {
        front = -1;
        rear = -1 ;
    }
    else
    {
        front=front+1;
    }
    printf("value deleted");
}
void display()
{
    int i;
    if(rear == -1)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\nprinting values .....\n");
        for(i=front; i<=rear; i++)
        {
            printf("\n%d\n",queue[i]);
        }
    }
}
void main ()
{
    int choice;
    while(choice != 5)
    {
        printf("\n1.enqueue an element\n2.Dequeue an element\n3.Display the queue\n4.peek\n5.exit");
        printf("\nEnter your choice ?");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nEnter valid choice??\n");
        }
    }
}
