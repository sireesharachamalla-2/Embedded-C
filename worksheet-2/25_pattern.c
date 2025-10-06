#include<stdio.h>
int main()
{
        int i,j;
        int n=5;
        for(i=1;i<=n;i++)
        {
                int r=2*i-1;
                for(j=i;j<=r;j++)
                        printf("%d",j);
                for(j=r-1;j>=i;j--)
                        printf("%d",j);
                printf("\n");
        }
        return 0;
}