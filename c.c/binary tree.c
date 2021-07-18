#include<stdio.h>
struct node{
int data;
struct node *left;
struct node *right;
};
struct node *create_tree()
{
    int x;
     struct node *newnode;
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("enter data( -1 for no node )");
    scanf("%d",&x);
    if(x==-1)
    {
        return NULL;
    }
     newnode->data=x;
     printf(" enter data for left node of %d",x);
     newnode->left=create_tree();
     printf(" enter data for right node of %d",x);
     newnode->right=create_tree();
     return newnode;
}
void displaypreOrder(struct node *root)
{
    if(root==NULL)
    {
        return ;
    }
    else{
        printf("%d\t",root->data);
        displaypreOrder(root->left);
        displaypreOrder(root->right);
        return root;
    }
}
main()
{
    struct node *root=NULL;
    root=create_tree();
    displaypreOrder(root);
}
