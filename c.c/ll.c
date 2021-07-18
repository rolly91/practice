#include<stdio.h>
main()
{
    struct node
    {
        int data;
        struct node *next
        };
    struct node *head=NULL,*temp=NULL, *newnode=NULL;
    int i,n;
    printf("how many nodes you want to enter ");
    scanf("%d",&n);
    head=NULL;
    temp=NULL;
    newnode=NULL;
    for(i=0; i<n; i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter the data for node");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if( head==NULL)
        {
            head=temp;
        }
        else
        {
            newnode=head;
            while(newnode->next!=NULL)
                newnode=newnode->next;

            newnode->next=temp;
        }

    }

    for(temp=head; temp!=NULL; temp=temp->next)
    {
        printf("%d\n",temp->data);
    }

}
