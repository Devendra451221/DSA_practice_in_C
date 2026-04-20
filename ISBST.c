#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
int main()
{
   struct node*p;
   struct node*p1;
   struct node*p2;
   struct node*p3;
   struct node*p4;
   
   p = create(p,4);
   p1 = create(p1,1);
   p2 = create(p2,5);
   p3 = create(p3,2);
   p4 = create(p4,6);

   p->left = p1;
   p->right = p4;
   p1->left = p2;
   p1->right = p3;

   printf("\nPreorder ::");
   preorder(p);

   printf("\nPostorder ::");
   postorder(p);

   printf("\nInorder ::");
   inorder(p);

   printf("\n%d",isBST(p));
   
   return 0;
   

}
void create(struct node *root,int info)
{
    root = (struct node*)malloc(sizeof(struct node));
    root->data = info;
    root->left = NULL;
    root->right = NULL;
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("\t%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
       postorder(root->left);
       postorder(root->right);
       printf("\t%d",root->data);
    }
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("\t%d",root->data);
        inorder(root->right);
    }
}
int isBST(struct node*root)
{
   static struct node *prev = NULL;
    if(root!=NULL)
     {
        if(!isBST(root->left)) 
        {
            return 0;
        }
        if(prev!=NULL&&root->data<=prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);       
     }
     else
     {
        return 1;
     }
}