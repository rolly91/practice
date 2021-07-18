#include<stdio.h>
typedef struct node
{
    int data;
    struct node*next;
} node;

void display_list(node * head);
node * create_linked_list(int n);
node* del_at_beg(node *);
node* del_at_end(node *);
node * create_node(node *);
int main()
{
    int n;
    node *head=NULL;
    printf("\n enter how many nodes you want to enter");
    scanf("%d",&n);
    head=create_linked_list(n);
    display_list(head);
    head = del_at_beg(head);
    display_list(head);
    head = del_at_end(head);
    display_list(head);
    head = create_node(head);
    display_list(head);
    return 0;

}

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

node* del_at_beg(node *head)
{

    node *temp;
    temp=head;
    head=head->next;
    //printf("%d", head->data);
    free(temp);
    return head;
}
node* del_at_end(node *head)
{
    node *temp,*previousnode;
    temp=head;
    while(temp->next!=NULL)
    {
        previousnode=temp;
        temp=temp->next;
    }
    previousnode->next=NULL;
    free(temp);
    return head;
}
node * create_node(node *head)
{
    node * newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head=newnode;
    return head;
}


