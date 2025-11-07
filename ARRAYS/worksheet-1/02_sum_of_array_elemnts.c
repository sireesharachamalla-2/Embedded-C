/*Sum of all elements in array
Question description: Write a C program to find the sum of all array elements entered by the user.
Sample data:
Input: 1 2 3 4 5
Expected output:
Sum = 15*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elemnts: ")
    scanf("%d",&n);
    int arr[n],i,sum=0;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nElements inarray are: ");
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("Sum = %d ",sum);

}