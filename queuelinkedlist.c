#include <stdio.h>
#include <stdlib.h>
struct node{
  int dta;
  struct node*nxt;
};
struct node*enq(struct node*,struct node*,int);
int deq(struct node**,struct node**);
void print(struct node*);
int main()
{
  struct node*f=NULL;
  struct node*r=NULL;
  struct node*p=NULL;
  struct node*new=NULL;
  char c;
  printf("Enter 1 or q.  ");
  while(1)
  {
     scanf("%c",&c);
     switch(c)
     {
      case '1': new=(struct node*)malloc(sizeof(struct node));
                printf("/nEnter dta : ");
                scanf("%d",&new->dta);
                new->nxt=NULL;
                if(r==NULL)
                {
                  r=f=new;
                  r=new;
                }
                else
                {
                  r->nxt=new;
                  r=new; 
                }
                break;
      case 'q': printf("Exiting ...");
                goto end;
                break;
     }
  }
  end :
           r=enq(f,r,0);
           r=enq(f,r,5);
    
         /*  printf("\nDequeue : %d",deq(&f,&r));
           printf("\nDequeue : %d",deq(&f,&r));
           printf("\nDequeue : %d",deq(&f,&r));
           printf("\nDequeue : %d",deq(&f,&r));
         */
                       
           print(f);
  return 0;
}
struct node*enq(struct node*f,struct node*r,int dta)
{
  struct node*new=(struct node*)malloc(sizeof(struct node));
  if(new==NULL)
  {
    printf("Cannot ENQUEUE\n");
  }
  else
  {
    new->dta=dta;
    new->nxt=NULL;
    r->nxt=new;
    r=new;
  }
  return r;
}
int deq(struct node**f,struct node**r)
{
  if(*f==NULL)
  {
    printf("\nCannot Deque");
    return -1;
  }
  else
  {
    struct node*p=*f;
    int x=p->dta;
    *f=p->nxt;
    free(p);
    return x;
  }
}
void print(struct node*f)
{
    struct node*p=f;
    while(p!=NULL)
    {
      printf("%d ",p->dta);
      p=p->nxt;
    }
}


