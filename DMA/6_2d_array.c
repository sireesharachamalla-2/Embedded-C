#include<stdio.h>
#include<stdlib.h>
int main()
{
        int row,col;
        printf("enter rows and columns: \n");
        scanf("%d%d",&row,&col);
        int **p=(int **)malloc(row*sizeof(int *));
        if(p==NULL)
        {
                printf("memory not allocated\n");
                return 1;
        }
        for(int i=0;i<row;i++)
        {
                p[i]=malloc(col*sizeof(int));
        }
         for(int i=0;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {
                        scanf("%d",&p[i][j]);
                }
                printf("\n");
        }

         for(int i=0;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {
                        printf("%d ",p[i][j]);
                }
                printf("\n");
        }
         for(int i=0;i<row;i++)
        {
                free(p[i]);
        }
         free(p);
         return 0;
    }