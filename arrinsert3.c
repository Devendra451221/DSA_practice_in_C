#include <stdio.h>
int main()
{
  int a[5];
  int i,size,num,ub,loc,k;
   printf("\nEnter the size of array.\n");
  scanf("%d",&size);
  printf("\nEnter the elements:\n");
   for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
   ub=size-1;//upper bound is size-1 or i //
  printf("\nYour array is:");
  for(i=0;i<size;i++)
  {
    printf("\t%d",a[i]);
  }
  if(ub==5-1)//if ub=size-1 ,then ub==5-1 and when ub=i,then ub==5-2//
  {
    printf("\nOverflow");
  }
  else
  {
    printf("\nEnter the data:\n");
    scanf("%d",&num);
    printf("\nEnter the location :\n");
    scanf("%d",&loc);
    k=ub;
    while(k>=loc-1)
    {
       a[k+1]=a[k];
       k--;
    }
    a[loc-1]=num;
    size++;
     for(i=0;i<size;i++)
  {
    printf("\t%d",a[i]);
  }

  }

  
  return 0;
}