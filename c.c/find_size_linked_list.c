#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next
    }
node;

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
void count (node * head)
{
    int size=0;
    node *p;
    p=head;
    while(p!=NULL){
        size++;
        p=p->next;
    }
    printf("%d",size);
}
main()
{
    node *head, *start, *last ;
    int n,x;
    printf("enter node numbers");
    scanf("%d",&n);
    head=create_list(n);
    print_list(head);
    count(head);

}
