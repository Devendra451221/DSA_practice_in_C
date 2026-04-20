/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
   int size;
   int top;
   char *arr;
};
int parenthesismatch(char *str,int length)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = length;
    s->arr = (char*)malloc(s->size*sizeof(char));
    int j;
    for(j=0;*(str+j)!='\0';j++)
    {
        if(*(str+j)=='(')
        {
            push(s,'c');
        }
        else if(*(str+j)==')')
        {
            if(isEmpty(s))
            {
                return 0;
            }
            else
            {
               return pop(s);
            }
        }
    }
    if(isEmpty(s))
    {
        return 1;
    }
    
}
int main()
{
    char s[100];
   
    int i;    
    printf("\nEnter the  length of expression :\n");
     printf("\nEnter the expression :");
     scanf("%s",s);
    char *str = s;
    int l = strlen(str);
    printf("\nThe length of expression is : %d",l);
    printf("\nRESULT : ");
    if(parenthesismatch(str,l))
    {
        printf("\nMATCHED:");
    }
    else
    {
        printf("\nNOT MATCHED :");
    }
    return 0;
}
int isEmpty(struct stack* p)
{
    if(p->top==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *p)
{
    if(p->top==p->size-1)
    {
        return 1;
    }
    else 
    return 0;
}
void push(struct stack *p,char info)
{
    if(isFull(p))
    {
        printf("\nOverflow : cant push %c",info);
    }
    else
    {
        p->top++;
        p->arr[p->top] = info;
    }
}
int pop(struct stack * p)
{
    if(isEmpty(p))
    {
        printf("\nUnderflow :");
    }
    else
    {
       int x = p->arr[p->top];
       p->top--;
       return x;
    }
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack 
{
    int size;
    int top;
    char * arr;
};
int main()
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    char s1[100];
    printf("\nEnter the expression : \n");
    scanf("%s",s1);
    char *str = s1;
    int l;
    l = strlen(str);
    printf("\nTHE LENGTH : %d",l);
    s->top = -1;
    s->size = l;
    s->arr = (char *)malloc(s->size*sizeof(char));
    if(parenthesismatch(s,str))
    {
        printf("\nMATCHED : ");
    }
    else
    {
        printf("\nNOT MATCHED :");
    }
    return 0;

}
int parenthesismatch(struct stack *p,char *str)
{
    for(int j=0;*(str+j)!='\0';j++)
    {
        if(*(str+j)=='(')
        {
            push(p,'(');
        }
        else if(*(str+j)==')')
        {
            if(isEmpty(p))
            {
                return 0;
            }
            pop(p);
        }
    }
    if(isEmpty(p))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack *p)
{
    if(p->top==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *p)
{
    if(p->top==p->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *p,char info)
{
    if(isFull(p))
    {
        printf("\nOverflow ");
    }
    else
    {
        p->top++;
        p->arr[p->top] = info;
    }
}
char pop(struct stack *p)
{
    if(isEmpty(p))
    {
        printf("\nUNDRFLOW ");
    }
    else
    {
      char x= p->arr[p->top];
      p->top--;
      return x; 
    }
}

