#include<stdio.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *temp,*head,*newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;

}
