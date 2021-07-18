#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
create_list(int n)
{
    int i;
    node *head=NULL;
    node *temp=NULL;
    node *p=NULL;
    for(i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("enter data");
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
node * display_list(node *head)
{

    node *p=head;
    while(p!=NULL)
    {
        printf(" %d\t", p->data);
        p=p->next;
    }


    return head;
}
node* insert_after_position(node *head)
{
    node *temp,*newnode;
    int pos,count;
    newnode=(node*)malloc(sizeof(node));
    printf("\n enter data for new node");
    scanf("%d",&newnode->data);
    printf("enter position for new insertion");
    scanf("%d",&pos);

    temp=head;
    while(--pos)
        temp=temp->next;
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}

node*  del_after_position(node *head)
{
    node *temp;
    node *nextnode;
    int pos;
    temp=head;
    printf("\n enter the position for deletion");
    scanf("%d",&pos);
    while(--pos)
    {
        temp=temp->next;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
    return head;

}
main()
{


    node *head=NULL;
    int n,pos;
    printf("enter node numbers");
    scanf("%d",&n);
    head=create_list(n);
    head=display_list(head);

    head=insert_after_position(head);
    printf("\n  inserting  data after a given position");
    head=display_list(head);

    head=del_after_position(head);
    printf("\n  deleting data after a given position");
    head=display_list(head);
}
