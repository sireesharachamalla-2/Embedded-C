#include<stdio.h>
int binary_search(int arr[],int n,int key)
{
        int low=0,high=n-1,mid;

        while(low<=high)
        {
                mid=(low+high)/2;
                if(arr[mid]==key)
                {
                        return mid;
                }
                else if(arr[mid]<key)
                {
                        low=mid+1;
                }
                else if(arr[mid]>key)
                {
                        high=mid-1;
                }
        }
        return -1;
}
int main()
{
        int n;
        printf("enter the size of array:");
        scanf("%d",&n);
        int arr[n];
        printf("enter sorted array\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        int key;
        printf("enter the element to search:\n");
        scanf("%d",&key);
        int res=binary_search(arr,n,key);
        if(res==-1)
        printf("element not found\n");
        else
        printf("%d found at %d index(position %d)\n",key,res,res+1);
        return 0;
}