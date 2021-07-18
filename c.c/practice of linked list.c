#include<stdio.h>
main()
//{
//    struct node{
//        int data;
//        struct node*next;
//    };
//    struct node *head,*newnode;
//    newnode=(struct node*)malloc(sizeof(struct node);
//    printf("enter data");
//    scanf("%d",&newnode->data);
//       newnode->data=head;
//       head=newnode;  //insertion at beginning
//insertion at end
struct node{
    int data;
    struct node*next;
};
struct node *head,*newnode,*temp;
newnode=(struct node*)malloc(sizeof (struct node))
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=NULL;
temp=head;
while(temp->!=NULL){
    temp=temp->next;
}
temp->next=newnode;
temp=
