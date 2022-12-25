#include<stdio.h>
int main()
{
    int a[10],b[10],c[50],i,j,k,m,n;
    printf("enter the number of elements in a");
    scanf("%d",&n);
    printf("Enter the elements of array 1");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number of elements in b");
    scanf("%d",&m);
    printf("Enter the elements of array 2");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0,j=0,k=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(i>=n)
    {
        while(j<m)
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    else 
    {
        while(i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}