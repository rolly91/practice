#include<stdio.h>
typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} node;

node * create_dll()
{
    node *head,*temp1,*newnode;
    head=NULL;
    temp1=head;
    int choice = 1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp1=newnode;
        }
        else
        {
            temp1->next=newnode;
            newnode->prev=temp1;
            temp1=newnode;
        }
        printf("enter your choice");
        scanf("%d",&choice);
    }
    //return NULL;
    return head;
}
void print(node * head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        printf(" %d\t",temp->data);
        temp=temp->next;
    }
}
void insert_at_position(node * head)
{
    node *temp,*newnode;
    int pos,i=1;
    temp=head;
    printf("enter position");
    scanf("%d",&pos);
    while(i<=pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);

    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev = temp;
}

main()
{
    node *head;
    head = create_dll();
    print(head);
    insert_at_position(head);
    print(head);

}
