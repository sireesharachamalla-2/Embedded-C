/*Copy array elements
Write a C program to copy all elements from one array to another.
Sample data:
Input: 1 2 3 4 5
Expected output:
Copied array: 1 2 3 4 5
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    int b[n];
    if(arr==NULL)
    {
        printf("memory not allocated\n");
        return ;
    }
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=arr[i];
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    free(arr);
}