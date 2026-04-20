#include <stdio.h>
#include <math.h>
int count(int);
void printNo(int);

int main()
{
    int n=5555;
    printNo(n);
    return 0;
}
int count(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
void printNo(int n)
{
    int c=count(n);
    int p=1;
    for(int i=1;i<c;i++)
    {
        p*=10;
    }
    while(c!=0)
    {
        printf("%d ",(n/p));
        n=n%p;
        p=p/10;
        c--;
    }
}