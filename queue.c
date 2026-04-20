#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int main()
{
    struct queue*q = (struct queue*)malloc(sizeof(struct queue));
    printf("\nbEnter the size :\n");
    scanf("%d",&q->size);
    q->r = q->f = -1;
    q->arr = (int*)malloc(q->size * sizeof(int));
    char inp;
    int val;
    int loc;
    while(1)
    {
        scanf("%c",&inp);
        switch(inp)
        {
            case '1' : printf("\nEnter data :\n");
                       scanf("%d",&val);
                       enqueue(q,val);
                       break;
            case 'q' : goto end;
                       break;
        }
    }
                     end :
                            printf("\nQ U E U E : : ::>>>");
                            //display(q);
                           //printf("\nDEENQUED : %d",dequeue(q));
                            printf("\nEntetr location to peek :\n");
                            scanf("%d",&loc);
                            printf("\nP E E K : %d",peek(q,loc));
                            printf("\nT O P = %d ",queueTop(q));
                            printf("\nB O T T O M = %d",queueBottom(q));
                            
                            return 0;
                           
}
int isEmpty(struct queue *q)
{
    if(q->f==q->r)
    {
        return 1;
    }
    return 0;
}
int isFull(struct queue *q)
{
    if(q->r == q->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q,int info)
{
    if(isFull(q))
    {
        printf("\nOVERFLOW : can't enqueue %d",info);
    }
    else
    {
        q->r++;
        q->arr[q->r] = info;
    }
}
int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("\nQUEUE IS E M P T Y : ::>>");
    }
    else
    {
        q->f++;
        int x = q->arr[q->f];
        return x;
    }
}
/* void display(struct queue*q)
{
   /*   while(q->f!=q->r)
    {
        printf("\nEnqueued : %d",q->arr[q->f]);
        q->f++;
    } //while loop se last value print nahi ho rahi to do while lagayenge //
    do{q->f++;
         printf("\nEnqueued : %d",q->arr[q->f]);
        
    }while(q->f!=q->r);
}*/
int queueTop(struct queue*q)
{
    return q->arr[q->f];
}
int queueBottom(struct queue*q)
{
    return q->arr[q->r];
}
int peek(struct queue *q,int pos)
{
    if(q->f+pos > q->r)
    {
        printf("\nInvalid P o s i t i o n :");
    }
    else
    {
        return q->arr[q->f+pos];
    }
}