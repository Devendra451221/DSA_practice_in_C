#include<stdio.h>
#include<stdlib.h>
struct node{
  int dta;
  struct node*l;
  struct node*r;
};
struct node*create(int);
void inorder(struct node*);
int isBst(struct node*);
int search(struct node*,int);
struct node*insert(struct node*,int);
int main(){
struct node*p=create(8);
struct node*p1=create(5);
struct node*p2=create(12);
struct node*p3=create(3);
struct node*p4=create(6);
struct node*p5=create(10);
struct node*p6=create(15);

p->l=p1;
p->r=p2;
p1->l=p3;
p1->r=p4;
p2->l=p5;
p2->r=p6;

printf("Inorder : ");
inorder(p);
// printf("\n    Is BST : %d",isBst(p));
// printf("\n    Search : %d",search(p,3));
// printf("\n SearchItr : %d",searchItr(p,3));
p=insert(p,23);
printf("\nInorder : ");
inorder(p);
return 0;
}
struct node*create(int dta){
  struct node*new =(struct node*)malloc(sizeof(struct node));
  new->l=NULL;
  new->r=NULL;
  new->dta=dta;
  return new;
}
void inorder(struct node*root){
  if(root!=NULL){
    inorder(root->l);
    printf(" %d",root->dta);
    inorder(root->r);
  }
}
int isBst(struct node*root){
  static struct node*prev=NULL;
  if(root!=NULL){
    if(!isBst(root->l)){
      return 0;
    }else if(prev!=NULL && prev->dta >= root->dta){
      return 0;
    }
    prev=root;
    return isBst(root->r);
  }
  return 1;
}
int search(struct node*root,int k){
  if(root!=NULL){
    if(root->dta==k){
      return 1;
    }else if(root->dta > k){
      return search(root->l,k);
    }else{
      return search(root->r,k);
    }
  }
  return -1;
}
int searchItr(struct node*root,int k){
  if(root!=NULL){
  while(root!=NULL){
    if(root->dta==k){
      return 1;
    }else if(root->dta > k){
      root=root->l;
    }else{
      root=root->r;
    }
  }
}
  return -1;
}
struct node*insert(struct node*root,int dta){
  struct node*p=root;
  struct node*prev=NULL;
  while(root!=NULL){
       prev=root;
    if(root->dta == dta){
      return p;
    }else if(root->dta > dta){
      root=root->l;
    }else{
      root=root->r;
    }
  }
  struct node*new=create(dta);
   if(prev->dta > dta){
    prev->l=new;
   }else{
    prev->r=new;
   }
   return p;
}