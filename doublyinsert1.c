#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node * next;
    struct Node * prev;
};
void printlinkedlist(struct Node *p);
int main()
{
  struct Node * head;
  struct Node * new;
  struct Node * p;
  struct Node * tail;
  
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
      new->prev=0;
      if(head==0)
      {
        head=p=new;
        p=new;
      }
      else
      {
        p->next=new;
        
        new->prev = p;
        
        
        p=new;
        tail = new;
        

      }
        break;
    case 'q': goto end;
              break;
     }
     
   }
   end : 
    printlinkedlist(head);
    printf("\nThe updated list :");
    head = insert(head,0);
    printlinkedlist(head);

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
 int insert(struct Node * head,int info)
 {
    struct Node * new1;
    
    new1= (struct Node *)malloc(sizeof(struct Node));
     new1->data = info;
   new1->next= head;
   new1->next->prev = new1;
   head = new1;
   /*or head->prev=new1;
        new1->next = head;
        head = new1;
   */
    return (int)head;
 }
