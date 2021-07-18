#include<stdio.h>
main()
{
typedef struct node
{
    int data;
    struct node *next;
} node;
 node *head=NULL;
 node *temp=NULL;
 node *p=NULL;
 int i,n;
 printf("enter node numbers");
    scanf("%d",&n);
 for(i=0;i<n;i++){
    temp=(node*)malloc(sizeof(node));
        printf("enter data");
        scanf("%d",& temp->data);
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

    int sum=0;
    temp=head;
    while(temp!=NULL){
        sum=sum+temp->data;
        temp=temp->next;
    }
    printf("%d",sum);

}
