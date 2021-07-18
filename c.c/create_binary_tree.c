#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create()
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
    printf("enter data for left child of %d ",x );
    newnode->left=create();
    printf("enter data for right child of %d ",x);
    newnode->right=create();
    return newnode;
}
void displayInOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        displayInOrder(root->left);
        printf("%d\t", root->data);
        displayInOrder(root->right);
    }
}
void displaypreOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {

        printf(" %d\t", root->data);
        displaypreOrder(root->left);
        displayInOrder(root->right);
    }
}
void displaypostOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        displaypreOrder(root->left);
        displayInOrder(root->right);
        printf(" %d\t", root->data);
    }
}
main()
{
    struct node *root=NULL;
    root=create();
    displayInOrder(root);
    displaypreOrder(root);
    displaypostOrder(root);

}

