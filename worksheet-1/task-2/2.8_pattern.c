#include<stdio.h>
int main()
{
        int n;
        printf("enter rows");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
                for(int j=i;j<=n;j++)
                {
                        if(i==1)
                        {
                                printf("%d ",j);
                        }
                        else if(j==i || j==n)
                        {
                                printf("%d ",j);
                        }
                        else
                        {
                                printf("  ");
                        }
                }
                printf("\n");
        }
}