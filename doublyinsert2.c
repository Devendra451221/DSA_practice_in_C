#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node * next;
    struct Node * prev;
};
int main()
{
    struct Node * head;
    struct Node * p;
    struct Node * new;
    struct Node * tail;
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
            new->prev=0;
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
                new->prev=p;
                p=new;
                tail = p;
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
      head = delete(head,2);
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

int delete(struct Node * head,int loc)
{
    struct Node * p = head;
    int i=0;
    while(i!=loc-1)
    {
        p=p->next;
        i++;
    }
    p->next->prev=p->prev;
    p->prev->next=p->next;
    return (int)head;
}