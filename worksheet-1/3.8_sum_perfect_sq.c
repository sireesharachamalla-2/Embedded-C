#include<stdio.h>
#include<math.h>
int main()
{
        int n,i,sum=0;
        printf("enter the number:\n");
        scanf("%d",&n);
        for(i=1;i*i<=n;i++)
        {
                sum+=i*i;
        }
        printf("sum %d\n",sum);
        return 0;
}
