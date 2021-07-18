#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node* head;
void push();
int pop ();
void display();
main()
{
    int choice=0;
    printf("stack operation using linked list");
    while(choice!=4)
    {
        printf("choose one from the below option\n");
        printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("exiting");
            break;
        }
        default:
        {
            printf("enter a valid choice");
        }

        }

    }
}
void push()
{
    int val;
    struct node*temp;
    temp=(struct node*)malloc(sizeof (struct node));
    if(temp==NULL)
    {
        printf("not able to push the elements");
    }
    else
    {
        printf("enter value");
        scanf("%d",&val);
        if(head==NULL)
        {
            temp->val=val;
            temp->next=NULL;
            head=temp;
        }
        else
        {
            temp->val=val;
            temp->next=head;
            head=temp;
        }
        printf("item pushed\n");
    }
}
int pop()
{
    int item;
    struct node *p;
    if(head==NULL)
    {
        printf("underflow");
    }
    else{
        item=head->val;
        p=head;
        head=head->next;
        free(p);
        printf("item poped %d\n", item);
    }
    return item;
}
    void display()
{
    struct node *p;
    p=head;
    if(p == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Printing Stack elements \n");
        while(p!=NULL)
        {
            printf("%d ",p->val);
            p = p->next;
        }
        printf("\n");
    }
}

