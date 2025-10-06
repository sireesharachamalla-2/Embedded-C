#include<stdio.h>
int main()
{
        int n1;
        printf("enter size of array");
        scanf("%d",&n1);
        int arr[n1];
        for(int i=0;i<n1;i++)
        {
                scanf("%d",&arr[i]);
        }
        int arr2[n1];
        int *ptr=arr;
        for(int i=0;i<n1;i++)
        {
                arr2[i]=*(ptr+i);
        }
        for(int i=0;i<n1;i++)
        {
                printf("%d ",arr2[i]);
        }
}