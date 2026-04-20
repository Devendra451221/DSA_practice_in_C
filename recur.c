/*#include <stdio.h>
int fib(int n)
{
   
    if(n==0||n==1)
     return 1;
    else
    return fib(n-1)+fib(n-2);

}
int main()
{
    int num,i=0;
    printf("\nEnter the number upto which you wnt the series:\n");
    scanf("%d",&num);
    while(i<num)
    {
        printf("\t%d",fib(i));
        i++;
    }
    return 0;
}*/
#include <stdio.h>
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
}
int main()
{
    int num;
    printf("\nEnter the number :\n");
    scanf("%d",&num);
    int i=0;
    while(i<num)
    {
        printf("\t %d",fib(i));
        i++;
    }
    return 0;
}