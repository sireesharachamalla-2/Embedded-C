#include<stdio.h>
void rem_dup(int *arr,int *n)
{
        int i,j,k;
        for(i=0;i<*n;i++)
        {
                for(j=i+1;j<*n;j++)
                {
                        if(*(arr+i)==*(arr+j))
                        {
                                for(k=j;k<*n-1;k++)
                                {
                                        *(arr+k)=*(arr+k+1);
                                }

                        (*n)--;
                        j--;

                        }
                }
        }

}
int main()
{
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("before removing\n");
        for(int i=0;i<n;i++)
        {
                printf("%d",arr[i]);
        }
        rem_dup(arr,&n);
        printf("after removing\n");

        for(int i=0;i<n;i++)
                printf("%d",arr[i]);

}