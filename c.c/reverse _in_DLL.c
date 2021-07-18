#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous
};

create_DLL(int n)
{
    struct node *tail,*head,*newnode;
    int i;
    head=NULL;
    for(i=1; i<=n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data for node");
        scanf("%d",&newnode->data);
        newnode->previous=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->previous=tail;
            tail=newnode;
        }
    }

    return head;
}
void print(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;

    }
    printf("\n");

}
struct node* reverse_DLL(struct node * head)
{
    struct node *temp,*nextnode, *pre =head;
    temp=head;
    while(temp!=NULL)
    {
        nextnode=temp->next;
        temp->next=temp->previous;
        temp->previous=nextnode;
        pre=temp;
        temp=nextnode;
    }
    return pre;
}

main()
{
    struct node*head;
    int n;
    printf("how many nodes you want to enter");
    scanf("%d",&n);
    head=create_DLL(n);
    print(head);
    head = reverse_DLL(head);
    print(head);
}
