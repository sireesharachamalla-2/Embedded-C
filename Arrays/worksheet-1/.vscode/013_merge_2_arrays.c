/*Merge two arrays
Question description: Write a C program to merge two arrays into a third array.
Sample data:
Array 1: 1 2 3
Array 2: 4 5 6
Expected output:
Merged array: 1 2 3 4 5 6
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
    int *b=(int *)malloc(n*sizeof(int));
    if(b==NULL)
    {
        printf("memory not allocated");
        return 1;
    }
    printf("Enter the elements in 1st array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements in 2nd array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    arr=(int *)realloc(arr,n*sizeof(int));

    for(i=0;i<n;i++)
    {
        arr[n+i]=b[i];
    }
    for(i=0;i<2n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    free(b);
    return 0;
}