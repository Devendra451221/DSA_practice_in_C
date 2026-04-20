#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};
int main()
{
    struct node * head;
    struct node * p;
    struct node * new;  
    struct node * tail;
    head = 0;
    char inp;
    printf("\n Press 1. to create :");
    printf("\nPress q. to quit :\n");
    while(1)
    {
        scanf("%c",&inp);
        switch(inp)
        {
            case '1' : new = (struct node *)malloc(sizeof(struct node));
                       new->next = 0;
                       printf("\nEnter the data :\n");
                       scanf("%d",&new->data);
                       if(head ==0)
                       {
                        head = p = new;
                       }
                       else
                       {
                         p->next = new;
                         p=new;
                         tail = p;
                       }
                       break;
            case 'q' : new->next = head;
                       goto end;
                       break;
        }
    }
    end :
         printf("\nThe initial list is :");
         print(head);
         printf("\nThe Updated list is :");
         head=delete(head,tail,2);
         print(head);
         return 0;

}
void print(struct node *head)
{  struct node * p = head;
    do
    {
      printf("\t%d",p->data);
      p = p->next;
    }while(p!=head);
}
int delete(struct node * head,struct node * tail,int num)
{
    struct node * p =head;
    struct node * prep =p;
if(head==0)
    {
        printf("\nUnderflow.");
    }
    
    else
    {
        while(prep->data!=num)
        {
            prep=p;
            p=p->next;
        }
        prep->next=p->next;
        free(p);
    }
    return (int)head;

    
}