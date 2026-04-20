#include <stdio.h>
int main()
{
   int a[10],b[10],c[10],m,n;
   printf("\nEnter m :\n");
   scanf("%d",&m);
    input(a,m);
   display(a,m);
   
   printf("\nEnter n :\n");
   scanf("%d",&n);
  
    input(b,n);
   display(b,n);
   merge(a,b,c,m,n);
   

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
void merge(int *a,int *b,int *c,int m,int n)
{
    int space  = m+n;
    c = (int *)malloc(space*sizeof(int));
    int i,j,k;
    i = j = k =0;

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
    display(c,space);
}
