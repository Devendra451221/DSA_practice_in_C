#include <stdio.h>
#include <stdlib.h>
struct node{
    int dta;
    struct node*nxt;
}; 

int isEmpty(struct node*);
int isFull(struct node*);
struct node*push(struct node*,int);
int pop(struct node**);
int peek(struct node*,int);
void print(struct node*);
 
int main()
{
  static struct node*top=NULL;
    char i;
    int dta;
    printf("Enter 1 or q : ");
    while(1)
    {
        scanf("%c",&i);
        switch(i)
        {
            case'1': printf("Enter data : ");
                     scanf("%d",&dta);
                     top=push(top,dta);
                     break;
            case 'q':printf("Exit...");
                     goto end;
                     break;
        }
    }
    end: printf("Stack : ");
        /* printf("\nPOP : %d",pop(&top));
         printf("\nPOP : %d",pop(&top));
         printf("\nPOP : %d",pop(&top));
         printf("\nPOP : %d",pop(&top));
         */
         
         printf("Peek : %d",peek(top,3));
      
         return 0;

}
int isEmpty(struct node*top)
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct node*top)
{
    struct node*avail=(struct node*)malloc(sizeof(struct node));
    if(avail==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node*push(struct node*top,int dta)
{
  if(isFull(top))
  {
    printf("Cannot Push");
  }
  else
  {
    struct node*avail=(struct node*)malloc(sizeof(struct node));
    struct node*new=avail;
    new->dta=dta;
    new->nxt=top;
    top=new;
  }
  return top;
}
int pop(struct node**top)
{
    if(isEmpty(*top))
    {
        return -1;
    }
    else
    {
        struct node*p=*top;
        int x=p->dta;
        *top=p->nxt;
        free(p);
        return x;
    }
}
int peek(struct node*top,int loc)
{
   struct node*p=top;
   int i=0;
   while(i!=loc-1)
   {
     p=p->nxt;
     i++;
   }
   return p->dta;
}
void print(struct node*top)
{
    struct node*p=top;
    while(p!=NULL)
    {
        printf("%d ",p->dta);
        p=p->nxt;
    }
}