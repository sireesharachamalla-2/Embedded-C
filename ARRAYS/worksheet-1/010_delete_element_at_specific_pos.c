/*Delete element at position
 Write a C program to delete a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Delete at position: 2
Expected output:
Array after deletion: 10 20 40
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,pos;
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
    printf("Enter position to delete the element: ");
    scanf("%d",&pos);
    if(pos<1 || pos>n+1)
    {
        printf("invalid position");
        free(arr);
        return 1;
    }
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);

}