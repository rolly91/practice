#include<stdio.h>
struct node
{
    int data;
    struct node *previous;
    struct node *next;
};
struct node *head, *tail=NULL, *newnode;
create_node(int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof (struct node));
        printf("enter node data");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=tail=newnode;
            head->previous=NULL;
            tail->next=NULL;
        }
        else
        {
            tail->next=newnode;
            newnode->previous=tail;
            tail=newnode;
            tail->next=NULL;
        }
    }
    return head;
}
void display(struct node *head)
{

    while(head!=NULL)
    {
        printf("%d-> <-",head->data);
        head=head->next;
    }
    printf("\n");
}
void insert_at_end()
{
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("enter node data");
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->previous=tail;
    tail=tail->next;
    tail->next=NULL;
}
main()
{
    int n;
    printf("enter node numbers");
    scanf("%d",&n);
    create_node(n);
    display(head);
    insert_at_end();
    display(head);
}
