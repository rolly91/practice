#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

node *concatenate(struct node *head1,struct node *head2)
{
    struct node *temp;
    temp = head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
    return head1;
}

void display(struct node *head)
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(head != NULL)
        {
            printf("%d\t ",head->data);
            head=head->next;
        }
    }
}

node * create_linked_list()
{
    int n, i;
    node *a = NULL, *temp, *p;
    printf("how many nodes you want to enter");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        printf("enter nodes for list");
        scanf("%d",&p->data);
        p->next=NULL;
        if(a==NULL)
        {
            a=temp=p;
        }
        else
        {
            temp->next=p;
            temp=p;
        }
    }
    return a;
}
int count (node * head)
{
    int size=0;
    node *p;
    p=head;
    while(p!=NULL)
    {
        size++;
        p=p->next;
    }
    printf(" size of list is %d\n",size);
}
struct node *find_merge_point(struct node *a,struct node *b)
{
    int x,y,z;
    x=count(a);
    y=count(b);
    struct node *head2=b;
    for(int i=0; i<x; i++)
    {
        b=head2;
        for(int j=0; j<y; j++)
        {
            if(a==b)
            {
                return a;
            }
            b=b->next;
        }
        a=a->next;
    }


}


int main()
{
    struct node *a,*b;

    a=create_linked_list();
    b=create_linked_list();
    struct node* head = concatenate(a,b);
    display(head);
    head=find_merge_point(a,b);



}
