#include<stdio.h>
int main()
{
        int num;
        printf("enter the number:\n");
        scanf("%d",&num);
        int b[32],i=0,j;
        if(num==0)
        {
                printf("Binary:0\n");
                return 0;
        }
        while(num)
        {
                b[i]=num%2;
                num/=2;
               i++;
        }
                for(j=i-1;j>=0;j--)
                {
                printf("%d",b[j]);
                }
        return 0;
}
