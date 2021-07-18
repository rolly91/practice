#include<stdio.h>
#include<stdlib.h>
#define max 6
int front=-1;
int rear=-1;
int queue[max];
int enqueue(int x)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if(((rear+1)%max)==front)
    {
        printf("queue is full");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        printf("dequeue data is %d",queue[front]);
        front=(front+1)%max;
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
        printf("peek data is %d",queue[front]);
    }

}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("queue is");
        while(i<=rear)
        {
            printf("%d",queue[i]);
            i=(i+1)%max;
        }
    }
}
main()
{
    int choice=0;
    int x;
    while(choice!=5)
    {
        printf("enter your choice\n");
        scanf("%d",&choice);
        printf("\n 1:enqueue\n 2:dequeue\n 3:display\n 4:peek\n 5:exit\n");
        switch(choice)
        {
        case 1:
        {
            printf(" enter value");
            scanf(" %d",&x);
            enqueue(x);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            peek();
            break;
        }
        case 5:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("enter a valid choice");
        }
        }
    }
}
