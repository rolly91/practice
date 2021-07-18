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

main()
{
    node *head;
    int n;
    printf("enter node numbers");
    scanf("%d",&n);
    head=create_list(n);
    print_list(head);
    node *start = head, *index = NULL;
    int temp;
    if(head == NULL)
    {
        return;
    }
    else
    {
        while(start != NULL)
        {
            index = start->next;
            while(index != NULL)
            {
                if(start->data > index->data)
                {
                    temp = start->data;
                    start->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            start = start->next;
            print_list(head);
        }
    }
}

