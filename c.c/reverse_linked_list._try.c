#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}
node;
node *temp,*head,*p;
node* create_node(int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("enter data");
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
void print()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
node* reverse(node *head)
{
    node* start;
    node *t1;
    node *t2;
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
    int n;

    printf("how many nodes you want to enter");
    scanf("%d",&n);
    head=create_node(n);
    print();
    head=reverse(head);
    print();
}

