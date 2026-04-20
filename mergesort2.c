#include <stdio.h>
#include <stdlib.h>
int main()
{
  int size;
  int a[10],b[10];
  printf("\nEnter size :\n");
  scanf("%d",&size);
  input(a,size);
  display(a,size);
  mergesort(a,b,0,size-1);
  display(a,size);
  return 0;
}
void input(int *a,int n)
{
    printf("\nENTER THE ARRAY :\n");
    for(int i = 0;i<n;i++)
    {
        scanf("\n%d",(a+i));
    }
}
void display(int *a,int n)
{
    printf("\nTHE ARRAY :\n");
    for(int i = 0;i<n;i++)
    {
        printf("\t%d",*(a+i));
    }
}
void mergesort(int *a,int *b,int low,int high)
{
    int mid;
    if(low<high)
    {
         mid = (low+high)/2;
         mergesort(a,b,low,mid);
         mergesort(a,b,mid+1,high);
         merge(a,b,low,mid,high);
    }
}
void merge(int *a,int *b,int low,int mid,int high)
{
    b = (int *)malloc(sizeof(a)*sizeof(int));
    int i,j,k;
    i = low;
    j = mid+1;
    k = low;
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
          b[k] = a[i];
          i++;
          k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for(int x = low;x<=high;x++)
    {
        a[x] = b[x];
    }
}