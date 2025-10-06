#include<stdio.h>
int main()
{
        int arr[]={1,2,3,4,5};
        int n=sizeof(arr)/sizeof(arr[0]);
        int k;
        printf("enter no of time sto rotate an array\n");
        scanf("%d",&k);
        printf("enter choice to rotate left(1) or right(2)");
        int choice;
        scanf("%d",&choice);
        if(choice==1)
        {       printf("left rotate\n");
                for(int i=0;i<k;i++)
                {
                        int temp=arr[i];
                        for(int j=0;j<n;j++)
                        {
                                arr[j]=arr[j+1];
                        }
                        arr[n-1]=temp;
                }
        }
        else
        {
                printf("right rotate\n");
                for(int i=0;i<k;i++)
                {
                        int temp=arr[n-1];                                                                                                                                          for(int j=n-1;j>=0;j--)
                        {
                                arr[j]=arr[j-1];
                        }
                        arr[0]=temp;
                }
        }
        for(int i=0;i<n;i++)
        {
                printf("%d ",arr[i]);
        }
        return 0;
}