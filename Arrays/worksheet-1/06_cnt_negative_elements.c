/* Count negative elements
 Write a C program to count total number of negative elements in an array.
Sample data:
Input: -1 3 -4 5 0 -7
Expected output:
Total negative elements: 3*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,cnt=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));

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
        if(arr[i]<0)
        {
         cnt++;   
        }
    }
    printf("%d ",cnt);
    free(arr);   
}