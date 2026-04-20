#include <stdio.h>
int main()
{
  
  int a[10];
  int i,size,num,ub;
  printf("\nEnter the size.\n");
  scanf("%d",&size);
  printf("\nEnter the elmnts of array:\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  ub=size-1;
  printf("\nArray is :");
   for(i=0;i<size;i++)
  {
    printf("\t%d",a[i]);
  }
 
  if(ub==20-1)
  {
    printf("\nOverflow.");
  }
  else
  {
    printf("\nEnter the data you want to insert :\n");
    scanf("%d",&num);
  
    ub=ub+1;
    
    a[ub]=num;
    size++;
      
     for(i=0;i<size;i++)
  {
    printf("\t%d",a[i]);
  }
      
  }
  return 0;
  
}