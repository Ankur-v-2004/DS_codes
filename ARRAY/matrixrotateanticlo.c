#include<stdio.h>
main()
{
    int i,j,a[10][10],n,m,k,temp;
    printf("enter the order of matrix");
    scanf("%d%d",&n,&m);
    printf("enter the elements of matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i;j<n;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        temp=0;
    }
    for(i=0;i<n;i++)
    {
        k=m-1;
        for(j=0;j<m/2;j++)
        {
            temp=a[i][k];
            a[i][k]=a[i][j];
            a[i][j]=temp;
            k--;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
}