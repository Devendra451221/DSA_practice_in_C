#include <stdio.h>
#include <stdlib.h>
struct q{
  int size;
  int f;
  int r;
  int *arr;
};
void enqf(struct q*,int);
void enqr(struct q*,int);
int deqf(struct q*);
int deqr(struct q*);
void print(struct q*);
int peek(struct q*,int);
int main()
{
  struct q*q=(struct q*)malloc(sizeof(struct q));
  q->f=q->r=-1;
  q->size=10;
  q->arr=(int *)malloc(q->size*sizeof(int));

  enqr(q,1);
   enqr(q,2);
    enqr(q,3);
     enqr(q,4);
     printf("\nDEQUEUE : %d ",deqf(q));
     printf("\nDEQUEUE : %d ",deqf(q));
     enqf(q,2);
     enqf(q,1);
     printf("\nQueue : ");
    // print(q);
     printf("\nPEEK : %d",peek(q,4));

  return 0;

}
void enqf(struct q*q,int dta)
{
   if(q->f==q->r&&q->f==-1)
   {
     printf("\nCANNOT ENQUEUE");
   } 
   else
   {
     q->arr[q->f]=dta;
     q->f--;
   }
}
void enqr(struct q*q,int dta)
{
   if(q->r==q->size-1)
   {
     printf("\nCANNOT ENQUEUE");
   } 
   else
   {
     q->r++;
     q->arr[q->r]=dta; 
   }
}
int deqf(struct q*q)
{
  if(q->f==q->r)
  {
    printf("\nCannot DEQUEUE");
    return -1;
  }
  else
  {
    q->f++;
    int x=q->arr[q->f];
    return x;
  }
}
int deqr(struct q*q)
{
  if(q->r==q->f)
  {
    printf("\nCannot dequeue");
    return -1;
  }
  else
  {
    int x=q->arr[q->r];
    q->r--;
    return x;
  }
}
void print(struct q*q)
{
  
  while(q->f!=q->r)
  {
    q->f++;
    printf("%d ",q->arr[q->f]);
  }
}
int peek(struct q*q,int loc)
{
   if(q->f+loc>q->r)
   {
     return -1;
   }
   else
   {
    return q->arr[q->f+loc];
   }
}