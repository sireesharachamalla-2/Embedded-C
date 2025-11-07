#include<stdio.h>
#include<stdarg.h>
int bitwise(char *p,int cnt,...)
{
        va_list args;
        va_start(args,cnt);
        int res=va_arg(args,int);  //first numer
        for(int i=1;i<cnt;i++)
        {
                int num=va_arg(args,int);

                if(strcmp(p,"AND")==0)
                {
                        res &=num;
                }
                else if(strcmp(p,"OR")==0)
                {
                        res |=num;
                }
                else if(strcmp(p,"XOR")==0)
                {
                        res=res^num;
                }
                else
                {
                        va_end(args);
                }
        }
                return res;
}

int main()
{
        int r1=bitwise("AND",4,7,15,3,1);
       int r2=bitwise("OR",3,5,8,2);
        int r3=bitwise("XOR",2,12,10);
        printf("r1=%d r2=%d r3=%d\n",r1,r2,r3);
}