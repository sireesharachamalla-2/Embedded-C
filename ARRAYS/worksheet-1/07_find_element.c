/*Find for an element
Question description: Write a C program to search for a number in an array and print its index.
Sample data:
Array: 10 20 30 40 50
Find: 30
Expected output:
Element found at index: 2
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,found=0,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));

    if(arr==NULL)
    {
        printf("memory not allocated\n");
        return ;
    }

    printf("Enter the elemnets: ")
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter the element you find: ")
    scanf("%d",&temp);
    for(i=0;i<n;i++)
    {
        if(arr[i]==temp)
        {
            found=i;
        }
    }
    printf("Element found at index : %d\n",found);
    free(arr);
}