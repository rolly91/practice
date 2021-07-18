#include<stdio.h>
struct node
{
    int data;
    struct node *previous;
    struct node *next;
};
struct node *head,*newnode;
void create_list()
{
    struct node *temp;
    int choice;
    temp=head;
    head=NULL;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);

        newnode->previous=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;

        }
        else
        {
            temp->next=newnode;
            newnode->previous=temp;
            temp=newnode;
        }
        printf("enter choice");
        scanf("%d",&choice);
    }
}
void print()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;

    }

}
void at_beg()
{

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data for new node");
    scanf("%d",&newnode->data);
    head->previous=newnode;
    newnode->next=head;
    head=newnode;


}
main()
{
    create_list();
    print();
    at_beg();
    print();
}
