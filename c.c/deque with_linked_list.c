#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *previous;
} node;
void enqueue_front()
{
    node*front=NULL;
    node *rear=NULL;
    node *newnode=NULL;
    newnode=(node*)malloc(sizeof(node));
    newnode->next=NULL;
    if(newnode==NULL)
    {
        printf("overflow");
    }
    else if(front==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        newnode->next=front;
        front->previous=newnode;
        front=newnode;

    }
}
void enqueue_rear()
{
    node*front=NULL;
    node *rear=NULL;
    node *newnode=NULL;
    newnode=(node*)malloc(sizeof(node));
    newnode->next=NULL;
    if(newnode==NULL)
    {
        printf("overflow");
    }
    else if(front==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        newnode->previous=rear;
        rear->next=newnode;
        rear=newnode;
    }
}
//void dequeue_front()
//{
//    node*front=NULL;
//    node *rear=NULL;
//    node *temp=NULL;
//    if(front==NULL){
//        printf("underflow")
//    }
//    else{
//        temp=front;
//        front=front->next;
//          free(temp);
//    }
//}
//void dequeque_rear()
{
//    node*front=NULL;
////    node *rear=NULL;
////    node *temp=NULL;
//    struct node *previousnode;
//    temp=front;
//
////    if(rear==NULL){
////        printf("underflow")
////    }
//    while(temp->next!=NULL)
//    {
//        previousnode=temp;
//        temp=temp->next;
//        previousnode->next=NULL;
//        previousnode->pre=temp;
//        free(temp);
//    }
//    return head;
//}

}

