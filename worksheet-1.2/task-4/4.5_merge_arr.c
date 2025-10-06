#include<stdio.h>
void mergeArray(int arr1[],int arr2[],int n1,int n2,int merged[])
{
        int i=0,j=0,k=0;
        while(i<n1 && j<n2)
        {
                if(arr1[i]<arr2[j])
                {
                        merged[k++]=arr1[i++];
                }
                else
                {
                        merged[k++]=arr2[j++];
                }
        }
        while(i<n1)
        {
                merged[k++]=arr1[i++];
        }
        while(j<n2)
        {
                merged[k++]=arr2[j++];
        }

}


int main()
{
        int arr1[]={1,3,4,5};
        int arr2[]={3,2,6,8,5};
        int n1=sizeof(arr1)/sizeof(arr1[0]);
        int n2=sizeof(arr2)/sizeof(arr2[0]);
        int merged[n1+n2];
        mergeArray(arr1,arr2,n1,n2,merged);
        for(int i=0;i<n1+n2;i++)
        {
                printf("%d ",merged[i]);
        }
}