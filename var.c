#include <stdio.h>
int num(int*,int*);
void main()
{
    int x=5,y=7;
    num(&x,&y);
    printf("\nx=%d and y=%d",x,y);
   
}
int num(int *a,int *b)
{   int x, y;
    *a=7;
    *b=5;
      printf("\nx=%d and y=%d",*a,*b);
      return 0;
}