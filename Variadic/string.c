#include<stdio.h>
#include<string.h>
#include<stdarg.h>
int char_count(int cnt,...)
{
        char str[100];
        str[0]='\0';
        va_list args;
        va_start(args,cnt);
        for(int i=0;i<cnt;i++)
        {
                strcat(str,va_arg(args,char *));
        }
        va_end(args);
        return strlen(str);
}
int main()
{
        printf("%d \n",char_count(3,"Bitsilica",".","Bitlearn"));
        return 0;
}