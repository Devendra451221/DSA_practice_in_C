#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    char *arr;
};
 int match(char,char);
 int parenthesismatch(char *);
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
void push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
 
char stackTop(struct stack* sp){
    return sp->arr[sp->top];
}
 
int main()
{
    char * exp = "[{()}]]";
    
   for(int i =0;*(exp+i)!='\0';i++)
   {
      printf("%c",exp[i]);
   }
    if(parenthesismatch(exp)){
        printf("\nThe parenthesis is balanced");
    }
    else{
        printf("\nThe parenthesis is not balanced");
    }
    return 0;
}
int parenthesismatch(char *exp)
{
   struct stack*s=(struct stack*)malloc(sizeof(struct stack));
   s->size=10;
   s->top=-1;
   s->arr=(char*)malloc(s->size*sizeof(char));

   for(int i=0;exp[i]!='\0';i++)
   {
     if(exp[i]=='['||exp[i]=='{'||exp[i]=='(')
     {
        push(s,exp[i]);
     }
     else
     {
        if(isEmpty(s))
        {
            return 0;
        }
        else
        {
            char popped=pop(s);
            if(!match(popped,exp[i]))
            {
                return 0;
            }
        }
     }
   }
    if(isEmpty(s))
    {
        return 1;
    }
    else{
        return 0;
    }
}
int match(char a,char b)
{
    if(a=='['&&b==']')
    return 1;
     else if(a=='{'&&b=='}')
    return 1;
     else if(a=='('&&b==')')
    return 1;
    else
    return 0;
}