#include<stdio.h>
void main()
{
    int arr[100000],arrc[1000000],i,j=0,m;
    printf("Enter the number of element in array");
    scanf("%d",&m);
    printf("enter the elements of array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        arrc[j]=arr[i];
        if(arr[i]==0)
        {
            arrc[j+1]=0;
            j++;
        }
        j++;
    }
    for(i=0;i<m;i++)
    {
        printf("%d",arrc[i]);
    }
}