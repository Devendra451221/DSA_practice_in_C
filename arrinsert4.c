#include <stdio.h>
int arrayinsert(int ar[],int size,int num,int loc,int ub)
{
   if(ub==10-1)
   {
    printf("\nARRAY OVERFLOW.");
    
   }
   
   else
   {
    int k = ub;
    while(k>=loc)
   {
    ar[k+1]=ar[k];
    k--;
   }
   }
   ar[loc]=num;
   return 1;
}
 void display(int ar[],int size)
 {
   printf("\nThe Updated Araay is :");
   for(int i=0;i<size;i++)
   {
    printf("\t%d",ar[i]);
   }
   
 }
 int main()
 {
  int a[10]={12,13,14,15,17,18};
  int size = 6;
  int ub=size-1;
  int loc;
  int num;
  printf("\nENTER THE LOCATION :\n");
  scanf("%d",&loc);
  printf("\nENTER THE DATA :\n");
  scanf("%d",&num);
   loc-=1;
   arrayinsert(a,size,num,loc,ub);
   ub+=1;
   size++;
   display(a,size);
   return 0;
 }
