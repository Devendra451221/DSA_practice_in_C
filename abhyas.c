#include <stdio.h>
#include <stdlib.h>
struct node{
  int dta;
  struct node*nxt;
};
void print(struct node*);
int peek(struct node*,int);
int pop(struct node**);
struct node*push(struct node*,int);
int isFull(struct node*);
int isEmpty(struct node*);
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
        //  printf("\nPOP : %d",pop(&top));
        //  printf("\nPOP : %d",pop(&top));
        //  printf("\nPOP : %d",pop(&top));
        //  printf("\nPOP : %d",pop(&top));
         printf("Peek : %d",peek(top,3));
      
         return 0;
}
int isEmpty(struct node*top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(struct node*new)
{
    if(new==NULL)
    {
        return 1;
    }
    return 0;
}
struct node*push(struct node*top,int dta)
{
    struct node*new=(struct node*)malloc(sizeof(struct node));
    if(isFull(new))
    {
          printf("\n Cannot PUSH !");
          return top;
    }
    new->dta=dta;
    new->nxt=top;
    top=new;
    return top;
}
int pop(struct node**top)
{
    if(isEmpty(*top))
    {
       printf("\n Cannot POP !");
       return -1; 
    }
    struct node*p=*top;
    int x=p->dta;
    *top=p->nxt;
    free(p);
    return x;
}
int peek(struct node*top,int loc)
{
    int i=0;
    while(i!=loc-1 && top!=NULL)
    {
      top=top->nxt;
      i++;
    }
    if(top!=NULL)
    {
        return top->dta;
    }
    return -1;
}
void print(struct node*top)
{
    while(top!=NULL)
    {
        printf(" %d",top->dta);
        top=top->nxt;
    }
}