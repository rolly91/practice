#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next
    };
struct node *top=NULL;

void push(int x)
{
    struct node* newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void display()
{
    struct node*temp;
    temp=top;
    if(temp==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("list is empty");
    }
    else
    {
        printf("top element is %d\n",top->data);
    }
}
void pop()
{
    struct node *temp=top;
    if(top==NULL)
    {
        printf("could not retrive data list is empty");
    }
    else
    {
        printf("poped data is %d\n",top->data);
        top=top->next;
        free(temp);
    }
}
main()
{
    int choice=0,x;
    while(choice!=5)
    {
        printf( " 1:push\n  2:pop\n  3:display\n  4:peek\n  5:exit\n  ");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            printf("enter data");
            scanf("%d",&x);
            push(x);
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
            peek();
            break;
        }

        case 5:
        {
            printf("exiting");
        }

        default :
        {
            printf("enter a valid choice");

        }
        }

    }
}
