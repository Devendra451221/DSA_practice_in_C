#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
    int add;
};
int main()
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    
    printf("\nEnter the size of STACK :\n");
    scanf("%d",&s->size);
    s->arr  = (int*)malloc(s->size*sizeof(int));
    s->top = -1;
    char inp;
    int val;
    int pos;
    printf("\nPress 1. to push :");
    printf("\nPress q. to quit :\n");
    while(1)
    {
        scanf("%c",&inp);
        switch(inp)
        { 
          case '1': printf("\nEnter the data :\n");
                    scanf("%d",&val);
                    push(s,val);
                    break;
          case 'q': goto end;
                    break;
        }
    }
          end :
             printf("\nSTACK IS :");
           print(s);
           printf("\nBottom = %d",stackBottom(s));
           printf("\nTop = %d",stackTop(s));
           printf("\nEnter the positon at which you want to see the number :\n");
           scanf("%d",&pos);
           printf("\nTHE DATA AT POSITION %d IS %d",pos,peek(s,pos));
           
           
           
           return 0;
}
int isEmpty(struct stack *p)
{
    if(p->top==-1)
    {
        return 1;
    }
    else
    {
       return 0;
    }
}
int isFull(struct stack *p)
{
    if(p->top==(p->size-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *p,int info)
{
    if(isFull(p))
    {
        printf("\nOVERFLOW : can't push %d",info);
    }
    else
    {
       p->top++;
       p->arr[p->top] = info;
       p->add = p->top;
    }
}
int pop(struct stack *p)
{
    if(isEmpty(p))
    {
        printf("\nUNDERFLOW :");
    }
    else
    {
       int x = p->arr[p->top];
       p->top--;
       p->add=p->top;
       return x;
    }
}
int stackTop(struct stack *p)
{
    return (p->arr[p->add]);
}
int stackBottom(struct stack *p)
{
    return p->arr[0];
}
void print(struct stack *p)
{
   /* while(p->top != -1)
    {
       printf("\nPOPPED : %d",pop(p));
    }*/
    while(p->top!=-1)
    {
        printf("\t%d",p->arr[p->top]);
        p->top--;
    }
}
int peek(struct stack *p,int pos)
{
   
   if((p->add-pos+1)<0)
   {
      printf("\nNot a valid position !");
      return -1;
   }
   else
   {
    return p->arr[p->add-pos+1];
   }
}