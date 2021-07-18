#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

node* create_list(int n)
{
    int i=0;
    node *head=NULL;
    node *temp=NULL;
    node *p=NULL;

    for(i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("enter node data");
        scanf("%d",& temp->data);
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
void display_list(node *head)
{
    node *p=head;
    while(p!=NULL)
    {
        printf(" %d\n", p->data);
        p=p->next;
    }
}
node* del_at_beg(node *head)
{
    node *temp;
    temp=head;
    head=head->next;
    free(temp);
    return head;
}
node* del_at_end(node *head)
{
    node *temp,*previousnode;
    temp=head;
    while(temp->next!=NULL)
    {
        previousnode=temp;
        temp=temp->next;
    }
    previousnode->next=NULL;
    free(temp);
    return head;

}
node * insert_at_beg(node *head)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("\nenter data for new node");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    return head;
}
node* insert_at_end(node *head)
{
    node *temp,*newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("\nenter data for new node");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=newnode;
    return head;
}
main()
{
    node *head=NULL;
    int n;
    printf("how many nodes you want to enter");
    scanf("%d",&n);
    head = create_list(n);
    display_list(head);
    printf("after deleting a node list is\n ");
    head=del_at_beg(head);
    display_list(head);
    printf("after deleting the last node list is\n ");
    head=del_at_end(head);
    display_list(head);
    printf("after inserting a new data list is");
    head=insert_at_beg(head);
    display_list(head);
    printf("after inserting a node at ending list is \n");
    head=insert_at_end(head);
    display_list(head);

}


