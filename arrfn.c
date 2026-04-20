#include <stdio.h>
void accept(int(*p)[3],int m,int n)
{  int i,j;
    printf("\nEnter the array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }
}
void display(int(*p)[3],int m,int n)
{
    int i,j;
    printf("\nARRAY :\n");
    for(i=0;i<m;i++)
    {    
        printf("\n");
        for(j=0;j<n;j++)
        { 

            printf("\t%d",*(*(p+i)+j));
        }
    }
}

int main()
{
    int a[3][3],m,n;
    printf("\nEnter mxn.\n");
    scanf("%d%d",&m,&n);
    accept(a,m,n);
    display(a,m,n);
    return 0;
}