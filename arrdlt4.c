#include <stdio.h>
int arraydlt(int ar[],int size,int ub,int loc)
{
   if(ub==NULL)
   {
    printf("\nUNderFLOW.");
    return -1;
   }
   else
   {
      int k=loc;
      while(ub>k)
      {
        ar[k]=ar[k+1];
        k++;
      }
      ar[ub]=NULL;
   }
   
}
void display(int ar[], int size)
{
  printf("\nYour Array is :\n");
  for(int i=0;i<size;i++)
  {
    printf("\t%d",ar[i]);
  }
}
int main()
{
  int a[10]={1,2,3,4,5,6,7,7,8,9};
   int size=10;
   int ub=size-1;
   int loc;
   printf("\nEnter the location you want to dlt.\n");
   scanf("%d",&loc);
   loc-=1;
   arraydlt(a,size,ub,loc);
   ub-=1;
   size--;
   display(a,size);
   return 0;
}
   