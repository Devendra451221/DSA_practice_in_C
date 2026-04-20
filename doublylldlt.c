#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node * next;
    struct node * prev;
};

void print(struct node *);
int main()
{  
     struct node * head;
    struct node * p;
    struct node * new;
    struct node * tail;
    head = 0;
    char inp;
    printf("\nPress 1. to continue :");
    printf("\nPress q. to quit :\n");
    while(1)
    {
        scanf("%c",&inp);
        switch(inp)
        {
            case '1' : new = (struct node *)malloc(sizeof(struct node));
                       new->next = 0;
                       new->prev = 0;
                       printf("\nEnter the data :\n");
                       scanf("%d",&new->data);
                       if(head==0)
                       {
                        head = p = new;
                             
                       }
                       else
                       {
                         p->next = new;
                         new->prev = p;
                         p = new;
                         tail = p;
                       }
                       break;
            case 'q' : goto end;
                       break;
        }
    }
           end :
                printf("\nThe LINKED LIST IS :");
                print(head);
                printf("\nThe updated list is :");
                head=delete(head,2);
                print(head);
              
                return 0;
}

void print(struct node * p)
{
    while(p!=NULL)
    {
        printf("\t%d",p->data);
        p=p->next;
    }
}
int delete(struct node * head,int loc)
{
   if(head==NULL)
   {
    printf("\nUNDER-FLOW::");
   }
   else
   {
      struct node * p = head;
      int i =1;
      while(i!=loc)
      {
        p=p->next;
        i++;
      }
      p->next->prev=p->prev;
      p->prev->next=p->next;
      free(p);
      return (int)head;
   }

}
