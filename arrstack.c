
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int main()
{
  struct stack*s = (struct stack*)malloc(sizeof(struct stack));
  printf("\nEnter size : \n");
  scanf("%d",&s->size);
  s->top = -1;
  s->arr = (int *)malloc(s->size*sizeof(int));
  char inp;
  printf("\nPress 1. to push :");
  printf("\nPress q. to quit :\n");
  while(1)
  {
    scanf("%c",&inp);
    switch(inp)
    {
      

    }
  }
}
int isEmpty(struct stack*p)
{
    if(p->top==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack*p)
{
    if(p->top==size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack*p,int info)
{
    if(isFull(p)){

        printf("\nOverflow :\n");
    }
    else
    {
        p->top++;
        p->arr[p->top] = info;
    }
}
int pop(struct stack*p)
{
    if(isEmpty(p))
    {
        printf("\nUnderflow");
    }
    else
    {
        int x = p->arr[p->top];
        p->top--;
        return x;
    }
}
    
