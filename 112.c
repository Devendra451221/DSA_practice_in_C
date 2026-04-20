#include<stdio.h>
#include<stdlib.h>
struct node{
  int dta;
  struct node*nxt;
};
void print(struct node*);
struct node*insert(struct node*,int);
struct node*delete(struct node*,int);
int main()
{
  struct node*head=NULL;
  struct node*p=NULL;
  struct node*new=NULL;
  
  
   char choice;
   
 
   while(1)
   { 
     printf("\nDo you want to create one more list : press 1.\n");
      printf("\nOR enter q to quit.");
      scanf("%c",&choice);

     switch (choice)
     {  case '1': 
        new =(struct node*)malloc(sizeof(struct node));
        new->nxt=NULL;
        printf("\nEnter dta : ");
        scanf("%d",&new->dta);

        if(head==NULL)
        {
          head=p=new;
        }else{
          p->nxt=new;
          p=new;
        }
        break;
    case 'q': goto end;
              break;
     }
     
   }
   end : printf("\n The Linked List : ");
         print(head);
         head=delete(head,3);
         printf("\n");
         print(head);
   return 0;
}
void print(struct node*head)
{
  while(head!=NULL)
  {
    printf(" %d",head->dta);
    head=head->nxt;
  }
}
struct node*insert(struct node*head,int dta)
{
  struct node*p=head;
  struct node*new=(struct node*)malloc(sizeof(struct node));
  new->dta=dta;
  new->nxt=NULL;
  while(p->dta!=dta)
  {
    p=p->nxt;
  }
  new->nxt=p->nxt;
  p->nxt=new;
  return head;
}
struct node*delete(struct node*head,int dta)
{
   struct node*p=head;
   struct node*prev=p;
   while(prev->dta!=dta)
   {
    prev=p;
    p=p->nxt;
   }
   prev->nxt=p->nxt;
   free(p);
   return head;
}

