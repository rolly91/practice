# include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node*front=NULL,*rear=NULL;

void enqueue( int x)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=newnode;
    }
    else # line
    {
        rear->next=newnode;
        rear=newnode;

    }
}
void display()
{

    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        node *temp=front;
        while(temp!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->next;
        }
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
void dequeue()
{

    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        printf("dequeue data is %d ",front->data);
        node*temp=front;
        front=front->next;
        free(temp);

    }
}
