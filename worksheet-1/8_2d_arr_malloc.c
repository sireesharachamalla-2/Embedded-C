#include<stdio.h>
#include<stdlib.h>
#define R 2
#define C 3
int main()
{
        int **arr=(int **)malloc(R*sizeof(int *));
        if(arr==NULL)
        {
                printf("memory not allocated\n");
                return 1;
        }
        for(int i=0;i<R;i++)
        {
                arr[i]=(int *)malloc(C*sizeof(int));
                for(int j=0;j<C;j++)
                {
                        scanf("%d",&arr[i][j]);
                }
        }
        for(int i=0;i<R;i++)
        {
                for(int j=0;j<C;j++)
                {
                        printf("%d ",arr[i][j]);
                }
        }
        for(int i=0;i<R;i++)
                free(arr[i]);
        free(arr);
}