#include<stdio.h>
#include<stdlib.h>
#define R 3
#define C 2
void allocate(int ***arr,int r,int c)
{
        *arr=(int **)malloc(r*sizeof(int *));
        if(*arr==NULL)
        {
                printf("memory not allocated\n");
                exit(1);
        }
        printf("enter the elements\n");
        for(int i=0;i<r;i++)
        {
                (*arr)[i]=(int *)malloc(c*sizeof(int));
        }
        int val=1;
        for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
        {
                (*arr)[i][j]=val++;
        }
        }
}
void deallocate(int ***arr,int r)
{
        for(int i=0;i<r;i++)
        {
                free((*arr)[i]);
        }

        free(*arr);
        *arr=NULL;
}
int main()
{
        int **arr;
        allocate(&arr,R,C);
        for(int i=0;i<R;i++)
        {
                for(int j=0;j<C;j++)
                {
                        printf("%d",arr[i][j]);
                }
        }
        deallocate(&arr,R);

}