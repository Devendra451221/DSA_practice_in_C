#include <stdio.h>
int main()
{
    int a[5];
    int i,size,ub,lb,loc,k;
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
  if(ub==0)
  {
    printf("\nunderflow.");
  }
else
{
     printf("\nEnter the loc:\n");
     scanf("%d",&loc);
     lb=0;
    k=loc-1;
     while(k<ub)
     {
        a[k]=a[k+1];
        k++;
     }
     a[ub]=NULL;
     ub-=1;
     size--;
      for(i=0;i<size;i++)
  {
    printf("\t%d",a[i]);
  }
    
}
return 0;

}