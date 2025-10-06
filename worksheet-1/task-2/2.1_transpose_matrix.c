#include<stdio.h>
#define R 3
#define C 3
int main()
{
        //int arr[R][C]={{1,2,3},{4,5,6},{7,8,9}};
        int arr[R][C];
        for(int i=0;i<R;i++)
        {
                for(int j=0;j<C;j++)
                {
                        scanf("%d",&arr[i][j]);
                }
        }
        for(int i=0;i<R;i++)
        {
                for(int j=0;j<C;j++)
                {
                        printf("%d",arr[i][j]);
                }
                printf("\n");
        }
        for(int i=0;i<C;i++)
        {
                for(int j=0;j<R;j++)
                {
                        printf("%d ",arr[j][i]);
                }
                printf("\n");
        }
}