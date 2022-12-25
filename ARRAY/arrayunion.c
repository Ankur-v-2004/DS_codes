#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],x,y,i,j,k,n;
    printf("enter the number of elements in array 1,2");
    scanf("%d%d",&x,&y);
    printf("enter the elements of array 1");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of the array 2");
    for(i=0;i<y;i++)
    {
        scanf("%d",&b[i]);
    }
    j=x+y;
    for(i=0;i<j;i++)
    {
        c[i]=a[i];
        n++;
    }
    for(i=0;i<j;i++)
    {
        for(k=0;k<y;k++)
        {
            if(a[i]!=b[k])
            {
                c[n]==b[k];
                n++;
            }
        }
        
        printf("%d",c[i]);
    }
}