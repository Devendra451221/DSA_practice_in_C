#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
void printlinkedlist(struct Node *p);
int main()
{
  struct Node * head;
  struct Node * new;
  struct Node * p;
   head = 0;
   char choice;
   
 
   while(1)
   { 
     printf("\nDo you want to create one more list : press 1.\n");
      printf("\nOR enter q to quit.");
      scanf("%c",&choice);

     switch (choice)
     {  case '1': 
     new = (struct Node*)malloc(sizeof(struct Node));
     printf("\nEnter the data.\n");
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
    case 'q': goto end;
              break;
     }
     
   }
   end : 
    printlinkedlist(head);
    printf("\nThe PEEK : %d",peek(head,5));

  return 0;
}
 void printlinkedlist(struct Node *p)
 {
    while(p!=NULL)
    {
        printf("\nElement : %d",p->data);
        p=p->next;
    }
 }
 int peek(struct Node *head,int loc)
{
    struct Node*p = head;
    int i = 0;
    while(i!=loc-1&&p!=NULL)
    
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

