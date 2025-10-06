#include<stdio.h>
int GCD(int a,int b)
{
        while(b!=0)
        {
                int temp=b;
                b=a%b;
                a=temp;
        }
        return a;
}
int main()
{
        int num1,num2;
        printf("enter two numvbers:\n");
        scanf("%d%d",&num1,&num2);
        int max,lcm;
        int gcd=GCD(num1,num2);
        max=(num1>num2)?num1:num2;
        while(1)
        {
                if(max%num1 == 0 && max%num2==0)
                {
                        lcm=max;
                        break;
                }
                max++;
        }
        printf("LCM of %d and %d is %d\n gcd=%d\n",num1,num2,lcm,gcd);
        return 0;
}