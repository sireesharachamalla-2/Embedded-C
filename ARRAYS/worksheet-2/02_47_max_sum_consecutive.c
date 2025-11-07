/* Find maximum sum of k consecutive elements 
Write a C program to find maximum sum of k consecutive elements in an array.
Sample data:
Input: 2 3 4 1 5 6 7 k = 3
Expected output:
Maximum sum of 3 consecutive elements: 18

*/
#include<stdio.h>
int main()
{
    int arr[]={2,3,4,1,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3,i,j,sum=0,max_sum=0;
    for(i=0;i<n-k+1;i++)
    {
        sum=0;
        for(j=i;j<k+i;j++)
        {
            sum+=arr[j];
        }
        if(sum>max_sum)
        {
            max_sum=sum;
        }
    }
    printf(" max sum %d\n",max_sum);
}