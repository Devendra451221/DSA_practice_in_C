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
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head = (struct Node*)malloc(sizeof(struct Node));
     second = (struct Node*)malloc(sizeof(struct Node));
      third = (struct Node*)malloc(sizeof(struct Node));
       fourth = (struct Node*)malloc(sizeof(struct Node));
       head -> data = 1;
       head -> next = second;
       second -> data = 2;
       second -> next = third;
       third -> data = 3;
       third -> next = fourth;
       fourth -> data = 4;
       fourth -> next = NULL;
       printf("\n WE WILL PRINT THE LINKED LIST....:");
       printlinkedlist(head);
      head = insertatfirst(head,0);
       printlinkedlist(head);
       return 0;
}
void printlinkedlist(struct Node * p)
{
    while(p!=NULL)
    {
        printf("\n Element : %d",p ->data);
        p = p->next;
    }
}
int insertatfirst(struct Node * head,int info)
{
    struct Node * avail;
    struct Node * new0;
    avail = (struct Node *)malloc(sizeof(struct Node));
    if(avail == NULL)
    {
        printf("\nOverflow");
        
    }
    else{

    
    new0 = avail;
    avail=avail->next;
    new0->data=info;
    new0->next = head;
    head = new0;
    
    }
     return new0;
}