#include<stdio.h>
main()
{
    struct node
    {
        int data;
        struct node *next
        };
    //del at begnning
    struct node *head, *temp,*previous node;
    temp=head;
    head=head->next;
    free(temp);
    //del at end;
    temp=head;
    while(temp->next!=NULL)
        previous node=temp;
    temp=temp->next;
    previous node->next=NULL;
    free(temp);
    //insert at begnning
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter newnode data");
    scanf("%d",&newnode->data);
    newnode->data=head;
    head=newnode;
    //insert at end
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter newnode data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
        temp= temp->next;
    temp->next=newnode;
    //insert after given location
    int position;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data position");
    scanf("%d",&position);
    temp=head;
    while(temp->next!=position)
        temp=temp->next;
    printf("enter newnode data");
    scanf("%d",newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
    //del after given location
    int location;
    printf("enter location");
    scanf("%d",&location);
    temp=head;
    while(temp->next!=location)
    {
        temp=temp->next;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);

