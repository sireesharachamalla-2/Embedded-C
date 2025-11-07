/* Reverse an array
 Write a C program to reverse an array in-place.
Sample data:
Input: 10 20 30 40 50
Expected output:
Reversed array: 50 40 30 20 10
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));

    if(arr==NULL)
    {
        printf("memory not allocated\n");
        return 0;
    }

    printf("Enter the elemnets: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    j=n-1;
    for(i=0;i<n/2;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
    free(arr);
}