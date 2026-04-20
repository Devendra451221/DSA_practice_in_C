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
    printf("\nPress '1' to create the list :");
    printf("\nPress 'q' to quit :");
    while(1)
    {
        scanf("\n%c",&inp);
        switch(inp)
        {
            case '1':
            new = (struct Node *)malloc(sizeof(struct Node));
            new->next=0;
            printf("\nEnter the data :\n");
            scanf("%d",&new->data);
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
            case 'q': goto end;
                      break;
        }
    }
    end :
      printf("\nInitial linked list:");
      print(head);
      printf("\nTHE updated list is :");
     head = insert(head,0,2);
     print(head);
      return 0;
      
} 
void print(struct Node * p)
{
    while(p!=NULL)
    {
        printf("\t%d",p->data);
        p=p->next;
    }
}
int insert(struct Node * head,int info,int loc)
{
    struct Node * avail;
    struct Node * new1;
    struct Node * p = head;
    avail = (struct Node *)malloc(sizeof(struct Node));
    if(avail==NULL)
    {
        printf("\nOVERFLOW");
    }
   else
   {
    new1=avail;
    avail=avail->next;
    new1->data=info;
    int i=0;
    while(i!=loc-1)
    {
        p=p->next;
        i++;
    }
    p->next=new1->next;
    p->next=new1;

   }
   return head;
    
}