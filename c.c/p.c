#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node* create_node(n)
{
    node *head=NULL;
    node *p=NULL;
    node *temp=NULL;
    int i;
    temp=head;
    for(i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("enter data for node");
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
            {
                p=p->next;
            }
            p->next=temp;

        }

    }
    return head;
}
void print(node *head)
{

    while(head!=NULL)
    {
        printf("%d\t",head->data);
        head=head->next;
    }

}
search( node *head,int x)
{
    node *p;
    p=head;
    while(p!=NULL)
    {
        if(p->data==x)

            return 1;
            p=p->next;

    }
    return 0;
}
main()
{
    node *head;
    int n,x;
    printf("enter node numbers");
    scanf("%d",&n);
    head=create_node(n);
    print(head);
    printf("enter element for searching");
    scanf("%d",&x);
 search( head,x)? printf("element found"):printf("element not found");
    return 0;
}
