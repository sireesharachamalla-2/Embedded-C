#include<stdio.h>
#define SIZE 5
int largest(int arr[],int n)
{
        if(n==0)
                return 0;
        else if(n==1)
                return arr[0];

        int max=largest(arr,n-1);

        return ((arr[n-1]>max)?arr[n-1]:max);

}

int main()
{
        int n;
        printf("enter n");
//      scanf("%d",&n);
        int arr[SIZE];
        for(int i=0;i<SIZE;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("%d\n",largest(arr,SIZE));
}