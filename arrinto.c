#include <stdio.h>
int main()
{
    int a[2][2]={1,2,3,4},b[2][2]={1,2,3,4},c[2][2];
    int i,j,k;
    printf("\nMultiplication :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nMultiplication of array is :\n");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("\t%d",c[i][j]);
        }
    }
    return 0;
}