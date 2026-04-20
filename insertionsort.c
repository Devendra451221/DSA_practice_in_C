#include <stdio.h>
int main()
{
  int a[10],size;
  printf("\nEnter the size :\n");
  scanf("%d",&size);
  input(a,size);
  display(a,size);
  insertionsort(a,size);
  display(a,size);
  return 0;
  
}
void insertionsort(int *a,int n)
{
    int j,key;
    for(int i = 1;i<=n-1;i++)//for passes//
    {
        key = a[i];
        j = i-1;
       while(j>=0&&a[j]<key)
       {
           a[j+1] = a[j];
           j--;
       }
       a[j+1] = key;
    }
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

void insertionsort(int *a)
{
    int key;
    int i,j,temp;
    for(i=1;i<=n-1;i++)
    {
       key = a[i];
       j = i-1;
       while(j>=0&&a[j]>key)
       {
          a[j+1] = a[j];
          j--;
       }
       a[j+1] = key;
    }
}