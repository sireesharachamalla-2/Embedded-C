#include<stdio.h>
int check_palindrome(int arr[],int n)
{
        int i=0,j=n-1;
        for(i=0,j;i<j;i++,j--)
        {
                if(arr[i]!=arr[j])
                {
                        return 0;
                }
        }
        return 1;
}

int main()
{
        int n;
        printf("enter the size of the array\n");
        scanf("%d",&n);
        int arr[n];
        printf("enter the elements of an array\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        if(check_palindrome(arr,n))
        {
                printf("palindrome");
        }
        else
        {
                printf("not  a palindrome\n");
        }
}