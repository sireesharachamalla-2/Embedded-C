/*Find maximum and minimum element
 Write a C program to find the largest and smallest element in the array.
Sample data:
Input: 8 3 15 6 2
Expected output:
Maximum = 15
Minimum = 2*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elemnts:")
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory not allocated\n");
        return ;
    }
    int i,min,max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("min=%d max=%d\n",min,max);
    free(arr);
    return 0;
}