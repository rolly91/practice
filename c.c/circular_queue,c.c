#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
node*front=NULL, *rear=NULL;
void enqueue(int x)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    rear->next=front;

}
void display()
{
    node*temp=front;
    if(front==NULL&&rear==NULL)
    {
        printf("list is empty");
    }
    else{
     while(temp->next != front)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
        printf("%d",temp->data);
}
}
void dequeue()
{
    node*temp=front;

    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty");
    }
    else if(front==rear){
        front=rear=NULL;
        free(temp);
    }
    else{

        front=front->next;
         rear->next=front;
         free(temp);

    }
}
void peek()
{
    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        printf("front data is %d ",front->data);

    }
}
main()
{
    int choice=0,x;
    while(choice!=5)
    {
        printf( "\n 1:enqueue\n  2:display\n  3:dequeue\n  4:peek\n  5:exit\n  ");
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            printf("enter data");
            scanf("%d",&x);
            enqueue(x);
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            dequeue();
            break;
        }
        case 4:
        {
            peek();
            break;
        }

        case 5:
        {
            printf("exiting");
        }

        default :
        {
            printf("enter a valid choice");

        }
        }

    }
}

