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
    printf("\nEnter the size : \n");
    scanf("%d",&q->size);
    q->f = q->r = 0; // i m p or t a n t//
    q->arr = (int *)malloc(q->size * sizeof(int));
    char inp;
    int val;
    printf("\nPress 1. to enqueue :");
    printf("\nPress q. to dequeue :\n");
    while(1)
    {
        scanf("%c",&inp);
        switch(inp)
        {
            case '1': printf("\nEnter data :\n");
                      scanf("%d",&val);
                      enqueue(q,val);
                      break;
            case 'q': goto end;
                      break;
        }
    }
                     end :
                          printf("\n Q U E U E ::>>");
                         // display(q);
                          printf("\nDequeued : %d",dequeue(q));
                          printf("\nDequeued : %d",dequeue(q));
                          enqueue(q,45);
                          enqueue(q,54);
                           printf("\nDequeued : %d",dequeue(q));
                            printf("\nDequeued : %d",dequeue(q));
                             printf("\nDequeued : %d",dequeue(q));
                              printf("\nDequeued : %d",dequeue(q));
                              printf("\nDequeued : %d",dequeue(q));


                          return 0;
}
int isEmpty(struct queue*q)
{
    if(q->f == q->r)
    {
        return 1;
    }
    return 0;
}
int isFull(struct queue*q)
{
    if((q->r+1)%q->size == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue*q,int info)
{
    if(isFull(q))
    {
        printf("\nOverflow ::>>");
    }
    else
    {
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = info;
    }
}
int dequeue(struct queue*q)
{
    if(isEmpty(q))
    {
        printf("\nUnderflow ::>>");
    }
    else
    {
        q->f = (q->f+1)%q->size;
        int x = q->arr[q->f];
        return x;
    }
}
void display(struct queue*q)
{
    while(q->f!=q->r)
    {    q->f++;
        printf("\n Dequeued : %d",q->arr[q->f]);
        
    }
}