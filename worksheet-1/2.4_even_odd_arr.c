#include<stdio.h>
int main()
{
        int n;
        printf("enter size of array\n");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        int res[n];
        int k=0,j=0;
        for(int i=0;i<n;i++)
        {
                if(arr[i]%2==0)
                {
                        res[k++]=arr[i];
                }
        }
        for(int i=0;i<n;i++)
        {
                if(arr[i]%2)
                {
                        res[k++]=arr[i];
                }
        }
         for(int i=0;i<n;i++)
               arr[i]=res[i];
          for(int i=0;i<n;i++)
               printf("%d ",arr[i]);
return 0;

}