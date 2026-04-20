#include <stdio.h>
int fact(int n)
{
   
    if(n==0||n==1)
    return 1;
    else
    {
      return n*fact(n-1);
    }
}
int main()
{
    int num,i=0,f;
    printf("\nEnter the number you want\n");
    scanf("%d",&num);
    while(i<num)
    {
       f=fact(num);
       i++;
    }
    printf("\n%d",f);
    return 0;
}