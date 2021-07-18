#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *create_ll(int n)
{
    node *head=NULL,*temp=NULL,*p=NULL;
    int i;
    for(i=1; i<=n; i++)
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
            {
                p=p->next;
            }
            p->next=temp;
        }
    }
    return head;

}

void print_list(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
main()
{
    node *temp,*current,*index,*head;
    int n;
    printf("how many nodes you want to enter");
    scanf("%d",&n);
    head=create_ll(n);
    print_list(head);
    current=head;
    if(head == NULL)
    {
        return;
    }
    else
    {
        while(current != NULL)
        {
            index = current->next;
            while(index != NULL)
            {
                if(current->data > index-> data)
                {
                    temp=current->data;
                    current->data=index->data;
                    index->data=temp;
                }
                index = index->next;
            }
            current = current->next;



        }
    }
    print_list(head);
}

