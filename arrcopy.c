#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},b[5];
    copy(a,b);
    return 0;
}
int copy(int *p,int *q)
{
    int i,j;
    printf("\nWe are copying array:\n");
    for(i=0;i<5;i++)
    {
        *(q+i)=*(p+i);
    }
    printf("\nJai Shree RAM.\n");
    for(i=0;i<5;i++)
    {
       printf("\t%d",*(q+i));
    }
    return 0;
}