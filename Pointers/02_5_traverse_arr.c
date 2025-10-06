#include<stdio.h>
int main()
{
    int arr[]={100,200,300,400};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *p=arr;
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}