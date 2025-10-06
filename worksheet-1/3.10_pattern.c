#include<stdio.h>
int main()
{
        int n=9;
        int row=(n/2)+1;
        for(int i=1;i<=row;i++)
        {
                for(int j=1;j<=n;j++)
                {
                        if(j==i || j==(n-i+1))
                        {
                                printf("%d",j==i?i:n-i+1);
                        }
                        else
                        {
                                printf(" ");
                        }
                }
                printf("\n");
        }
}