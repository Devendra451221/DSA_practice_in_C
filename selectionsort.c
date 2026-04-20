#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[10],b[10],m,n;
  printf("\nEnter the elements(m) : \n");
  scanf("%d",&m);
  input(a,m);
  display(a,m);

   printf("\nEnter the elements(n) : \n");
  scanf("%d",&n);
  input(a,n);
  display(a,n);
  
  int size = m+n;
  int *c = (int *)malloc(size*sizeof(int));
  merge(a,b,c,m,n);
  display(c,size);
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
/*void selectionsort(int *a,int n)
{
    int min;
    int temp;
    for(int i =0;i<n-1;i++)
    {
        min = i;
       for(int j = i+1;j<n;j++)
       {
          if(a[j]<a[min])
          {
            min = j;
          }
       }
           temp = a[i];
           a[i] = a[min];
           a[min] = temp;
    }
}*/
void selectionsort(int *a,int n)
{
  int min;
  int i,j,t;
  for(i=0;i<n-1;i++)
  {
    min = i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[min])
        {
            min = j;
        }
    }
       t = a[min];
       a[min] = a[i];
       a[i] = t;
       
  }
}
void merge(int *a,int *b,int *c,int m,int n)
{
    int i,j,k;
    i = j = k = 0;
    while(i<m&&j<n)
    {
        if(a[i]<b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        c[k] = a[i];
            i++;
            k++;
    }
    while(j<n)
    {
        c[k] = b[j];
            j++;
            k++;
    }
}
