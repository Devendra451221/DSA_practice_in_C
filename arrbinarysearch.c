#include <stdio.h>
int main()
{
    int a[10];
    int size;
    printf("\nEnter the Size of array :\n");
    scanf("%d",&size);
    printf("\nEnter the sorted array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }   
    int num;
    printf("\nEnter the number to search :\n");
    scanf("%d",&num);
    int result = (int)binarysearch(a,size,num);
    printf("\nThe number is %d at index %d.",num,result);
    return 0;

}
int binarysearch(int ar[],int size,int num)
{
    int low,mid,high;
    low=0;
    high=size-1;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ar[mid]==num)
        {
            return mid;
        }
      else if(ar[mid]<num)
        {
            low=mid+1;

        }
        else 
        {
          high=mid-1;
        }
    }
    return -1;
}

  