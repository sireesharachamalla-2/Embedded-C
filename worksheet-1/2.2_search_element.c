#include<stdio.h>
int main()
{
        int n;
        printf("enter the size of array\n");
        scanf("%d",&n);
        int arr[n];
        printf("enter the elements of array\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        int k;
        printf("enter the element to search\n");
        scanf("%d",&k);
        int f=0;
        for(int i=0;i<n;i++)
        {
                if(arr[i]==k)
                {
                        f=1;
                        printf("found at position %d\n",i);
                        break;
                }
        }
        if(!f)
        {
                printf("not found\n");
        }
        return 0;
}