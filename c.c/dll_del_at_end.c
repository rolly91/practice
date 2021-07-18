#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node * pre;
};

struct node* create_dll(struct node *head)
{
    struct node *temp,*newnode;
    int choice = 1;
    head=NULL;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data for node");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->pre=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->pre=temp;
            temp=newnode;
        }
        printf("enter choice ");
        scanf("%d",&choice);
    }
    return head;
}
struct node* print( struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
    return head;
}
struct node* del_at_end(struct node *head)

{
    struct node  *temp;
    struct node *previousnode;
    temp=head;
    while(temp->next!=NULL)
    {
        previousnode=temp;
        temp=temp->next;
        previousnode->next=NULL;
        previousnode->pre=temp;
        free(temp);
    }
    return head;
}
main()
{
    struct node *head;
    head =create_dll(head);
    head = print(head);
    head = del_at_end(head);
    head = print(head);
}
