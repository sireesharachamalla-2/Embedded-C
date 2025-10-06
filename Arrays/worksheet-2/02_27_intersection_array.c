#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4.5};
    int arr2[]={2,6,5,7};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int i,j;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(arr[i]==arr2[j])
            {
                printf("%d ",arr[i]);
            }
        }
    }

}