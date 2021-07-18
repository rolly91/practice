#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next
    } node;

node * create_list(int n)
{
    node *head=NULL;
    node  *temp=NULL;
    node *p=NULL;
    int i;
    for(i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("enter data");
        scanf("%d", &temp->data);
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
void print_list(node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
node* reverse( node * head)
{
    node *start, *t1,*t2;
    start=head;
    while(start!=NULL)
    {
        t2=start->next;
        start->next=t1;
        t1=start;
        start=t2;
    }
    return t1;
}
main()
{
    node *head;
    int n;
    printf("enter node numbers");
    scanf("%d",&n);
    head=create_list(n);
    print_list(head);
    head=reverse(head);
    print_list(head);
}
