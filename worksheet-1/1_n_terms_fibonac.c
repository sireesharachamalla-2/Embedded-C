#include<stdio.h>
int main()
{
        int n;
        printf("enterbthe number of terms:\n");
        scanf("%d",&n);
        int a=0,b=1,c;
        for(int i=0;i<n;i++)
        {
                if(i==0)
                {
                        printf("%d ",a);
                        continue;
                }
                if(i==1)
                {
                        printf("%d ",b);
                        continue;
                }
                c=a+b;
                for(int j=1;j<=1;j++)
                {
                        printf("%d ",c);
                }
                a=b;
                b=c;
        }
        return 0;
}