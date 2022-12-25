#include<stdio.h>
int main()
{
    int a[10],n,s,i=0,sa=0;
    printf("enter the number of elements in array");
    scanf("%d",&n);
    s=(n*(n-1))/2;
    printf("Enter the array");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sa=sa+a[i];
    }
    printf("%d",sa-s);
}