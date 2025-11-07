/*
Sort array in ascending order
Write a C program to sort elements in ascending order.
Sample data:
Input: 20 5 10 8
Expected output:
Sorted array: 5 8 10 20
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,temp;
    printf("Enter number of elemnts: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory not allocated");
        return 1;
    }
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
              arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
}