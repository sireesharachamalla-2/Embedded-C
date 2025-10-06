#include<stdio.h>
#include<stdarg.h>
int mul(int cnt,...)
{
        int m=1;
        va_list args;
        va_start(args,cnt);
        for(int i=0;i<cnt;i++)
        {
                m*=va_arg(args,int);
        }
        va_end(args);
        return m;
}
int main()
{
        printf("product = %d\n",mul(3,1,2,3));
        printf("product = %d\n",mul(2,3,4));
        return 0;
}