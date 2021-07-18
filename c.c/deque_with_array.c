#include<stdio.h>
#include<stdlib.h>
#define N 5
int front =-1;
int rear =-1;
int deque[N];
void enqueue_rear(int x)
{
    if((front==0&&rear==N-1)||(front==rear+1))
    {
        printf("queue is full");
    }
    else if( front==-1&&rear==-1)
    {
        front=rear=0;
        deque[rear]=x;
    }
    else if(rear==N-1)
    {
        rear=0;
        deque[rear]=x;
    }
    else
    {
        rear++;
        deque[rear]=x;
    }

}

void enqueue_front(int x)
{
    if((front==0&&rear==N-1)||(front==rear+1))
    {
        printf("queue is full");
    }
    else if( front==-1&&rear==-1)
    {
        front=rear=0;
        deque[front]=x;
    }
    else if(front==0)
    {
        front=N-1;
        deque[front]=x;
    }
    else
    {
        front--;
        deque[front]=x;
    }
}
void dequeue_front()
{
    if(front==-1&&rear==-1)
    {
        printf("list is empty");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==N-1)
    {
        printf("the dequeue element is %d",deque[front]);
        front=0;
    }
    else
    {
        printf("the dequeue element is %d",deque[front]);
        front++;
    }

}
void dequeue_rear()
{
    if(front==-1&&rear==-1)
    {
        printf("list is empty");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(rear==0)
    {
        printf("the dequeue element is %d",deque[rear]);
        rear=N-1;
    }
    else
    {
        printf("the dequeue element is %d",deque[rear]);
        rear--;
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("list is empty");
    }
    else
    {
        while(i!=rear)
        {
            printf("%d\t",deque[i]);
            i=(i+1)%N;
        }
    }
    printf("%d\t",deque[rear]);
}


main()
{
    int x,choice=0;
    while(choice!=6)
    {
        printf("\n 1:enqueue_rear\n 2:enqueue_front\n 3:dequeue_rear\n 4:dequeue_front\n 5:display\n 6:exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            printf("enter data");
            scanf("%d",&x);
            enqueue_rear(x);
            break;
        }
        case 2:
        {
            printf("enter data");
            scanf("%d",&x);
            enqueue_front(x);
            break;
        }
        case 3:
        {
            dequeue_rear();
            break;
        }
        case 4:
        {
            dequeue_front();
            break;
        }
        case 5:
        {
            display();
            break;
        }
        default:
        {
            printf("enter valid choice");
        }
        }


    }
}
