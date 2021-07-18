#include<stdio.h>
struct node
{
    int data;
    struct  node *left;
    struct node *right;

};
void main()
{
    int n,i,item;
    struct node *root, *p,*q;
    printf("enter the number of nodes");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        p=( struct node*)malloc(sizeof(struct node));
        scanf("%d",&item);
        p->data=item;
        p->left=NULL;
        p->right=NULL;;
        if(i==0)
            root=p;
        else
        {
            q=root;
            while(1)
            {
                if(p->data > q->data)
                {
                    if(q->right == NULL)
                    {
                        q->right=p;
                        break;
                    }
                    else
                    {
                        q=q->right;
                    }
                }
                else
                {
                    if(q->left==NULL)
                    {
                        q->left=p;
                        break;
                    }
                    else
                    {
                        q=q->left;
                    }
                }
            }
        }
    }
    }

