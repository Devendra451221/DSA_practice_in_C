#include <stdio.h>
#include <stdlib.h>
struct node{
  int dta;
  struct node*nxt; 
};
struct node*enq(struct node*,struct node*,int);
int deq(struct node**,struct node**);
void print(struct node*);
void main()
{
  struct node*f=NULL;
  struct node*r=NULL;
  struct node*p=NULL;
  struct node*new=NULL;
   char c;
   int dta;
  printf("Enter 1 or q.  ");
  while(1)
  {
     scanf(" %c",&c);
     switch(c)
     {
      case '1': 
      printf("\nEnter data : ");
      scanf("%d",&dta);
      new=(struct node*)malloc(sizeof(struct node));
      new->dta=dta;
      new->nxt=NULL;

      if(r==NULL)
      {
        r=f=new;
        r=new;
      }else{
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
        r=enq(f,r,1);
        r=enq(f,r,2);
        r=enq(f,r,3);
        r=enq(f,r,4);

         printf("\n The queue :: :: >>");
         print(f);

}
struct node*enq(struct node*f,struct node*r,int dta)
{
  struct node*new=(struct node*)malloc(sizeof(struct node));
  if(new==NULL)
  {
    printf("Cannot Enqueue :: :: ::>>");
    return NULL;
  }
  new->dta=dta;
  new->nxt=NULL;
  if(r==NULL)
  {
    r=f=new;
    r=new;
  }
  else{
    r->nxt=new;
    r=new;
  }
  return r;
}
int deq(struct node**f,struct node**r)
{
  if(*f==NULL)
  {
    printf("Cannot Dequeue :: :: :: >>");
    return -1;
  }else{
    struct node*p=*f;
    int x=p->dta;
    *f=p->nxt;
    free(p);
    free(f);
    return x;
  }
}
void print(struct node*f)
{
  while(f!=NULL)
  {
    printf(" %d",f->dta);
    f=f->nxt;
  }
}