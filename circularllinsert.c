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
         head = insert(head,0,2);
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
int insert(struct node * head,int info,int loc)
{
   struct node * avail;
   struct node * new1;
   struct node * p = head;
   struct node * prep = p;

   avail = (struct node *)malloc(sizeof(struct node));
   if(avail==NULL)
   {
    printf("\nOVERFLOW0");
   }
   else
   {
      new1 = avail;
      avail = avail->next;
      new1->data = info;
      int i = 0 ;
      while(i!=loc-1)
      {
        prep = p;
        p=p->next;
        i++;
      }
      prep->next=new1;
      new1->next=p;

      
   }
   return (int)head;
}