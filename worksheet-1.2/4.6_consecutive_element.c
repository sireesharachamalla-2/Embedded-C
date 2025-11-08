#include<stdio.h>
void consecutive(int *arr,int *n);
int main()
{
        int n;
        printf("enter the size of the array\n");
        scanf("%d",&n);
        int arr[n];
        printf("enter the array elements\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        consecutive(arr,&n);
}
void consecutive(int *arr,int *n)
{
        int cnt=1;
        for(int i=0;i<*n;i++)
        {
                if(i<*n && *(arr+i)==*(arr+i+1))
                {
                        cnt++;

                }
                else
                {
                        printf("element %d occurs %d times\n",*(arr+i),cnt);                        cnt=1;
                }
        }

}