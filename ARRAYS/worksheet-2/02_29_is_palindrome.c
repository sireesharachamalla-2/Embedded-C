
/*Check if array is palindrome
Write a C program to check whether an array is palindrome (reads the same forward and backward).
Sample data:
Input: 1 2 3 2 1
Expected output:
The array is a palindrome.*/
#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        printf("array is palindrome\n");
    }
    else{
        peintf("not a palindrome\n");
    }

}