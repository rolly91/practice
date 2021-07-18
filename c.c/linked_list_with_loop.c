#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *create_ll(int n)
{

    int i=0;
    node *head=NULL;
    node *temp=NULL;
    node *p=NULL;

    for(i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("enter the data for node number:%d\n",i+1);
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
                p= p->next;
            p->next=temp;
        }
    }
    return head;
}
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void make_a_loop(node *head,int k)
{

    node *temp=head;
    int count=1;
    while (count < k)
    {
        temp = temp->next;
        count++;
    }
    struct Node* loop = temp;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = loop;
}
void findloop(struct node *head)
{
    struct node *slow,*fast;
    slow=fast=head;
    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            printf("linked list contains a loop\n");
            return;
        }
    }
    printf("no loop in a linked list");
}
main()
{
    int n;
    printf("how many nodes you want to enter");
    scanf("%d",&n);
    node *head;
    head=create_ll(n);
    print(head);
    make_a_loop(head,3);
    findloop(head);
}
