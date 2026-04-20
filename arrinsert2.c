#include <stdio.h>
int main()
{
  int a[10];
  int i,size,num,ub,k,lb=0;
  printf("\nEnter the size of array.\n");
  scanf("%d",&size);
  printf("\nEnter the elements:\n");
   for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
 
  printf("\nYour array is:");
  for(i=0;i<size;i++)
  {
    printf("\t%d",a[i]);
  }
  ub=size-1;
  if(ub==10-1)
  {
    printf("\nOverflow.");
  }
  else
  {
    printf("\nEnter the element to insert:\n");
    scanf("%d",&num);
    k=ub;
    while(k>=lb)
    {
      a[k+1]=a[k];
      k--;
    }
    a[lb]=num;
    size++;
    for(i=0;i<size;i++)
  {
    printf("\t%d",a[i]);
  }
  }
   return 0;
}