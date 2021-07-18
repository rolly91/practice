#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next
    }
node;

node * create_cll(int n)
{
    node *head=NULL,*tail,*newnode,*temp;
    int i;
    for(i=0; i<n; i++)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter data");
        scanf("%d", &newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    tail->next=head;
    return head;
}

node* insert_at_beg(node * head)
{
    node *newnode, *tail=head;
    newnode=(node*)malloc(sizeof(node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(tail->next!=head)
    {
        tail=tail->next;
    }
    tail->next=newnode;
    newnode->next=head;
    head=newnode;
    return head;

}
node* insert_at_end(node * head)
{
    node *newnode, *tail=head;
    newnode=(node*)malloc(sizeof(node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(tail->next!=head)
    {
        tail=tail->next;
    }
    newnode->next=head;
    tail->next=newnode;
    return head;
}
node* insert_at_pos(node *head)
{
    int i=1,pos;
    node*temp=head;
    node* newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    printf("enter position for new insertion");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;

}

void print(node *head)
{
    node *temp=head;

    if(temp==NULL)
    {
        printf("list is empty");
    }
    else
    {
        printf("%d ",temp->data);
        temp = temp->next;
        while(temp != head)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}


main()
{
    node*head;
    int n;
    printf("enter how many nodes you want to enter");
    scanf("%d",&n);
    head=create_cll(n);
    print(head);
    head = insert_at_beg(head);
    print(head);
    head = insert_at_end(head);
    print(head);
    head= insert_at_pos(head);
    print(head);

}
