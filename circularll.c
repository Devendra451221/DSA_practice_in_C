#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node * next;
};
int main()
{
    struct Node * head;
    struct Node * p;
    struct Node * new;
    head=0;
    char inp;
    printf("\nPress 1. for list :");
    printf("\nPres q. to end :");
    while(1)
    {
        scanf("\n%c",&inp);
        switch(inp)
        {
            case '1' : new = (struct Node *)malloc(sizeof(struct Node));
                       printf("\nEnter the data :\n");
                       scanf("%d",&new->data);
                       new->next=0;
                       if(head==0)
                       {
                        head=p=new;
                        p=new;
                       }
                       else
                       {
                         p->next=new;
                         p=new;
                       }
                       break;
            case 'q' : p->next = head;
                      goto end;
                      break;
        }
    }
     end :
     printf("\nThe Initial list :");
      print(head);
     printf("\nThe updated list is :");
     head = insert(head,0);
     print(head);

     return 0;

}
void print(struct Node * head)
{    
     struct Node * p = head;
    do
    {
        printf("\t%d",p->data);
        p=p->next;
    }while(p!=head);
}
int insert(struct Node * head, int info)
{
    struct Node * avail;
    struct Node * new1;
    struct Node * p = head;
    p=p->next;
    avail = (struct Node *)malloc(sizeof(struct Node));
    if(avail==NULL)
    {
        printf("\nOVERFLOW : ");
    }
    else
    {
      new1 = avail;
      new1->data = info;
      p=p->next;
      while(p->next!=head)
      {
        p=p->next;
      }
     p->next = new1;
     new1->next =head;
     head = new1;


    }
    return (int)head;
}