#include <stdio.h>

 void delete(int ar[],int size,int ub,int loc)
 {
    if(ub==NULL)
    {
        printf("\nUnderflow:");
    }
    else
    {  
        loc = loc-1;
       int k = loc;
       while(k<=ub)
       {
         ar[k]=ar[k+1];
         k++;
       }
       ar[ub]=NULL;
    }
 }
void display(int ar[], int size)
{
    printf("\nARRAY IS :");
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("\t%d",ar[i]);
    }
}
int main()
{
    int a[10] = {1,2,3,4,5};
    int size = 5;
    int loc;
    int ub = size-1;
    display(a,size);
    printf("\nEnter the location :\n");
    scanf("%d",&loc);
    delete(a,size,ub,loc);
    ub-=1;
    
    size--;

    display(a,size);
    return 0;
}