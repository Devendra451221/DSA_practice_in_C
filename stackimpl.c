#include <stdio.h>
#include <stdlib.h>
struct stack 
{
    int size;
    int top;
    int *arr;
};
void print(struct stack * p);
int main()
{
    struct stack * s;
    s = (struct stack *)malloc(sizeof(struct stack));
    printf("\nEnter the size of stack :\n");
    scanf("%d",&s->size);
    s->top = NULL;
   s->arr = (int *)malloc(s->size*sizeof(int));
    char inp;
    int val;
     printf("\nPress 1. to enter one more element :");
     printf("\nPress q. to quit :\n");
    while(1)
    {   
        scanf("%c",&inp);
        switch(inp)
        {
            case '1' : printf("\nEnter the element :\n");
                       scanf("%d",&val);
                       push(s,val);
                       break;
            case 'q' : goto end;
                       break;
        }
    }
    end : 
         print(s);
        
    return 0;
    

}
int isEmpty(struct stack * p)
{
    if(p->top==NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack * p)
{
    if(p->top==p->size)
    {
        return 1;
    }
    return 0;
}
int push(struct stack * p,int info)
{
    if(isFull(p))
    {
        printf("\n%d CANT BE INSERTED OVERFLOW",info);
        return 0;
    }
    else
    {
       p->top++;
       p->arr[p->top]=info;
    }
}
int pop(struct stack * p)
{
    if(isEmpty(p))
    {
        printf("\n  UNDERFLOW");
        return 0;
    }
    else
    {
       int info = p->arr[p->top];
       p->top--;
       return info;
    }
}
void print(struct stack * p)
{
    while(p->top!=0)
    {

       printf("\t%d",pop(p));
    }
}
/*int peek(struct node * top, int loc)
{
    struct node * p = top;
    int i= 0;
    while(i<loc-1&&p!=NULL)
    {
        p=p->next;
        i++;
    }
    if(p!=NULL)
    {
        return p->data;
    }
    else
    {
        return -1;
    }
}
*/