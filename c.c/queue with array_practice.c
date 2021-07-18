#include<stdio.h>
int queue[4];
int maxsize[3];
int front= -1;
int rear= -1;
void enqueue()
{
    int x;
    printf("enter data");
    scanf("%d",&x);
    if(rear==maxsize)
    {
        printf("queue is full");
        return;
    }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }

}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("list is empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("the dequeue data is %d\n",queue[front]);
        front++;
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("list is empty");
    }
    else{
        printf("front value is %d\n",queue[front]);
    }
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
}void main ()
{

    int choice;
    while(choice != 5)
    {
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.peek\n5.exit");
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

