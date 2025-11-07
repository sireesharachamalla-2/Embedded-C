/*
Find the difference of two array.
Write a C program to find the difference of two arrays (elements present in first array but not in second).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Difference (Array1 - Array2): 1 2

*/
#include<stdio.h>
#define MAX 1000
int main()
{
        int n,i,freq[MAX]={0};
        printf("enter size of array");
        scanf("%d",&n);
        int arr1[n],arr2[n];
        for(i=0;i<n;i++)
                scanf("%d",&arr1[i]);
        for(i=0;i<n;i++)
                scanf("%d",&arr2[i]);
        for(i=0;i<n;i++)
        {
                freq[arr2[i]]++;
        }
        for(i=0;i<n;i++)
        {
                if(freq[arr1[i]]==0)
                {
                        printf("%d ",arr1[i]);
                }
        }
}
