#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m,p,q;
    printf("enter the order of matrix");
    scanf("%d%d",&n,&m);
    printf("enter the elements of matrix 1");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the order of matrix 2");
    scanf("%d%d",&p,&q);
    printf("enter the elements of matrix 2");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //substraction of matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d    ",c[i][j]);
        }
        printf("\n");
    }
}