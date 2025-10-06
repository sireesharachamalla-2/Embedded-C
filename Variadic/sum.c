#include<stdio.h>
#include<stdarg.h>
int sum(int cnt,...)
{
        int total=0;
        va_list args;
        va_start(args,cnt);
        for(int i=0;i<cnt;i++)
        {
                total+=va_arg(args,int);
        }
        va_end(args);
        return total;
}
int main()
{
        printf("sum =%d\n",sum(4,10,20,30,40));
        printf("sum=%d\n",sum(3,1,10,4));
        printf("sum=%d\n",sum(2,10,20));
        return 0;
}