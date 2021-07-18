#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *previous;
}
node;
node *create_dll(node *head)
{
    node *temp,*newnode;
    head=NULL;
    temp=head;
    int choice=1;
    while(choice)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->previous = NULL;
        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->previous=temp;
            temp=newnode;

        }
        printf("enter your choice");
        scanf("%d",&choice);

    }
    return head;
}
node* print(node *head)
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }printf("\n");
    return head;
}
node* at_beg(node *head)
{
    node *temp;

    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        head->previous=NULL;
        free(temp);

    }
    return head;
}
main()
{
    node *head;
    head=create_dll(head);
   head= print(head);
    head=at_beg(head);
     head= print(head);
}

