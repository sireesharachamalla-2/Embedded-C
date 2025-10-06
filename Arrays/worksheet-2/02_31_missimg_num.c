#include<stdio.h>
int main()
{
        int arr[]={1,2,4,5,6};
        int n=sizeof(arr)/sizeof(arr[0]);
        int max_sum=(n+1)*(n+2)/2;
        int sum=0;
        for(int i=0;i<n;i++)
        {
                sum+=arr[i];
        }
        printf("missing element %d\n",max_sum-sum);
}