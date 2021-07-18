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
search(node *head,int x)
{
    node *p;
    p=head;
    int i=0;
    while(p!=NULL)
    {
        if(p->data==x)
            return i;
        p=p->next;
        i++;
    }
    return -1;

}
main()
{
    node *head;
    int n,x;
    printf("enter node numbers");
    scanf("%d",&n);
    head=create_list(n);
    print_list(head);
    printf("enter data for search");
    scanf("%d",&x);
    int pos=1111;
    (pos = search(head, x)) != -1 ? printf("element found %d", pos) : printf("element not found");
    return 0;
}

