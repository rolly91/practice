#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *create_linked_list(int n)
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
void display_list(node *head)
{
    node *p=head;
    while(p->next!=NULL)
    {
        printf(" %d ->", p->data);
        p=p->next;
    }
    printf(" %d\n", p->data);

}
node* reverse(node *head)
{
    if(head == NULL || head->next==NULL)
       {
           return head;
       }
       node *temp = reverse(head->next);
       head->next->next = head;
       head->next=NULL;
       return temp;

}
int main()
{
    int n;
    node *head=NULL;
    printf("\n enter how many nodes you want to enter");
    scanf("%d",&n);
    head=create_linked_list(n);
    display_list(head);
    head=reverse(head);
    display_list(head);
}

