#include<stdio.h>
#include <stdlib.h>
int main()
{
        int n;
        printf("enter the size of array\n");
        scanf("%d",&n);
        int *arr=(int *)malloc(n*sizeof(int));
        if(arr==NULL)
        {
                printf("memory not allocated\n");
                return 1;
        }
        printf("enter the elements:\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("reallocate memory\n");
        int n1;
        printf("enter size greater than n \n");
        scanf("%d",&n1);
        arr=(int *)realloc(arr,n1*sizeof(int));
        printf("enter elements for reallocate\n");
        for(int i=n;i<n1;i++)
                scanf("%d",&arr[i]);

        for(int i=0;i<n1;i++)
                printf("%d ",arr[i]);
        free(arr);
        arr=NULL;
        return 0;
}
