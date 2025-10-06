#include<stdio.h>
int power(int x,int n)
{

        if(n==0)
                return 1;
        else if(n<0)
                return 1/power(x,-n);
        else
                return x*power(x,n-1);

}


int main()
{
        int num;
        printf("enter number:\n");
        scanf("%d",&num);
        int p;
        scanf("%d",&p);
        printf("power of a number=%d\n",power(num,p));
}