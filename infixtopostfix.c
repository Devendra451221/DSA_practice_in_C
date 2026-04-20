#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct stack
{
    int size;
    int top;
    char *arr;
};
 char *infixToPostfix(char*);
 int isOperator(char );
 int preced(char );
 char stackTop(struct stack*);
char stackTop(struct stack* sp){
    return sp->arr[sp->top];
}
 
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
char *infixToPostfix(char*infix)
{
    struct stack*s=(struct stack*)malloc(sizeof(struct stack));
    s->size=strlen(infix);
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));

    char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));
    int j=0;
    int i=0;
    while(infix[i]!='\0')
    {
        if(!isOperator(infix[i]))
        {
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else
        {
            
            if(preced(stackTop(s))>=preced(infix[i]))
            {
              postfix[j]=pop(s);
              j++;

            }
            else
            {
                push(s,infix[i]);
                i++;
            }
        }
    }
    while(!isEmpty(s))
    {
        postfix[j]=pop(s);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int isOperator(char a)
{
    if(a=='+'||a=='-'||a=='*'||a=='/')
    return 1;
    else
    return 0;
}
int preced(char a)
{
    if(a=='*'||a=='/')
    return 3;
     if(a=='+'||a=='-')
     return 2;
    else
    return 0;
}
int main()
{
    char * infix = "x-y/z-k*d";
    printf("postfix is %s", infixToPostfix(infix));
    return 0;
}
