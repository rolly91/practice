#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *previous;
} node;
node* create_sll(int n)
{
    node *temp=NULL;
    node *p=NULL;
    node*head=NULL;
    int i;

    for(i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("enter data for nodes");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            p=head;
            while(p->next!=NULL)
                p=p->next;
           p->next=temp;

        }
    }
    return head;
}
node* create_dll(int n)
{
    node *temp=NULL;
    node*head=NULL;
    node*tail=NULL;
    int i;

    for(i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("enter data for nodes");
        scanf("%d",&temp->data);
        if(head==NULL)
        {
            head=tail=temp;
            head->next=temp;
           temp->previous=NULL;
        }
        else{
            tail->next=temp;
            temp->previous=tail;
            tail=temp;
            tail->next=NULL;
            }
    }
            return head;

}
node* create_cll(int n)
{
    node *temp=NULL;
    node*head=NULL;
    node*tail=NULL;
     node *p=NULL;
    int i;
    for(i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("enter data for nodes");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
            head=tail=temp;
        }
        else
        {
            p=head;
            while(p->next!=NULL)
                p=p->next;
           p->next=temp;
           temp->next=head;

        }
    }
    return head;
}
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
main()
{
    int n;
   printf("how many nodes you want to enter");
    scanf("%d",&n);
    node* head;
    head=create_sll(n);
    print(head);
    head=create_dll(n);
    print(head);
    head=create_cll(n);
    print(head);

}
