#include<stdio.h>
int main()
{
        int row,col;
        printf("enter rows and cols:");
        scanf("%d%d",&row,&col);
        int size=row*col;
        int arr1[size];
        for(int i=0;i<size;i++)
        {
                scanf("%d",&arr1[i]);
        }
        for(int i=0;i<size;i++)
        {
                printf("%d ",arr1[i]);
        }
        printf("\n");
        int arr2[row][col];
        //convert 1d to 2d array
        for(int i=0;i<row;i++)
        {
                for(int j=0;j<col;j++)
                {
                        arr2[i][j]=arr1[i*col+j];
                }
        }
        for(int i=0;i<row;i++)
         {
                for(int j=0;j<col;j++)
                {

                        printf("%d ",arr2[i][j]);;
                }
                printf("\n");
        }
}