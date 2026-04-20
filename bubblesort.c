#include <stdio.h>


int main()
{   
    int a[10];
    int size;
    printf("\nEnter the size :\n");
    scanf("%d",&size);
     printf("\nEnter the array :");
    for(int i =0;i<size;i++)
    {
        scanf("\n%d",&a[i]);
    }
     printf("\n the array :::>>");
    for(int i =0;i<size;i++)
    {
        printf("\t%d",a[i]);
    }
    bubblesort(a,size);
    printf("\n");
    for(int i =0;i<size;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}

void bubblesort(int *a,int n)
{
   int issorted;
    for(int i = 0;i<n-1;i++)
    {
         issorted = 1;
          printf("\nworking on pass %d",i+1);
        for(int j =0;j<n-1-i;j++)
        {
           
            if(a[j]>a[j+1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                issorted =0;
            }
        }
        if(issorted)
        {
            return;
        }
    
    }
}
void bubblesort(int *a,int n)
{
    int issorted;
    int t;
    for(int i = 0;i<n-1;i++)
    {
        issorted = 1;
        printf("\nWorking on pass %d.",i+1);
        for(int j = 0;j<n-i-1;i++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j+1];
                a[j+1] = a[j];
                a[j] = t;
                issorted = 0;
            }
            
        }
            if(issorted)
            {
                return;
            }
    }
}