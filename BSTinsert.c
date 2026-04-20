#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *r;
    struct node *l;
};
int main()
{
   struct node *p = create(p,9);
   struct node *p1 = create(p1,7);
   struct node *p2 = create(p2,11);
   struct node *p3 = create(p3,6);
   struct node *p4 = create(p4,8);
   struct node *p5 = create(p5,10);

   p->l = p1;
   p->r = p2;
   p1->l = p3;
   p1->r = p4;
   p2->l = p5;
 
   printf("\nInorder ::>>");
   inorder(p);
   if(isBST(p))
   {
     printf("\nit is BST::>>");
   }
   else
   {
    printf("\nit is not BST ::>>");
   }
   if(searchitr(p,6))
   {
     printf("\nKEY FOUND");
   }
   else
   {
     printf("\nNOT FOUND");
   }
   printf("\nInserting a node ::>>");
   insert(p,12);
   printf("\nInserted : %d",p->r->r->data);
   return 0;
       
}
void create(struct node *root,int info)
{
    root = (struct node*)malloc(sizeof(struct node));
    root->data = info;
    root->l = NULL;
    root->r = NULL;
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("\t%d",root->data);
        preorder(root->l);
        preorder(root->r);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->l);
        postorder(root->r);
        printf("\t%d",root->data);
    }
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->l);
        printf("\t%d",root->data);
        inorder(root->r);
    }
}
int isBST(struct node*root)
{
    static struct node *prep = NULL;
    if(root!=NULL)
    {
        if(!isBST(root->l))
        {
            return 0;
        }
        if(prep!=NULL&&prep->data>=root->data)
        {
            return 0;
        }
        prep = root;
        return (isBST(root->r));
    }
    else
    {
        return 1;
    }
}

int binary(struct node *root,int key)
{
   if(root== NULL)
   {
      return 0;
   }
   if(root->data == key)
   {
      return root;
   }
   else if(key>root->data)
   {
      return binary(root->r,key);
   }
   else
   {
     return binary(root->l,key);
   }
}

int searchitr(struct node*root,int key)
{
    if(root==NULL)
    {
        return 0;
    }
    while(root!=NULL)
    {
        if(root->data == key)
        {
            return root;
        }
        else if(root->data>key)
        {
            root = root->l;
        }
        else
        {
            root= root->r;
        }
    }
}
void insert(struct node*root,int key)
{
    struct node *prep;
    struct node * new1 =  (struct node*)malloc(sizeof(struct node));
    new1->data = key;
    new1->l = NULL;
    new1->r = NULL;
    while(root!=NULL)
    {
        prep = root;
        if(root->data==key)
        {
           printf("\nCant insert::>>");
           return;
        }
        else if(root->data>key)
        {
            root = root->l;
        }
        else
        {
            root = root->r;
        }
    }
   
    if(prep->data > key)
    {
        prep ->l = new1;
    }
    else
    {
        prep->r = new1;
    }
}