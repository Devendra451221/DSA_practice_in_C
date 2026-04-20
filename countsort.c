#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[10],size;
  printf("\nEnter the size :\n");
  scanf("%d",&size);
  input(a,size);
  display(a,size);
  //printf("\nMax = %d",maximun(a,size));
  countsort(a,size);
 
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
void countsort(int *a,int n)
{
    int max1 = maximun(a,n);
    int *count = (int*)malloc((max1+1)*sizeof(int));
    int i,j;
  
    for(i=0;i<max1+1;i++)
    {
        count[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        count[a[i]] = count[a[i]]+1;
    }
    i = 0;
    j = 0;

    while(i<=max1)
    {
       
         if(count[i]>0)
         {
            a[j] = i;
            count[i] = count[i] -1;
            j++;
        }
        else{
            i++;
        }

    }
     display(a,n);
     
}
int maximun(int*a,int n)
{
    int max = *a;
    for(int i = 0;i<n;i++)
    {
        if(max<*(a+i))
        {
            max = *(a+i);
        }
    }
    return max;
}