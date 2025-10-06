#include<stdio.h>
#include<string.h>
int str_int(char *str)
{

        int rev=0,i=0;
        while(*str)
        {
                if(*str>='0' && *str<='9')
                        rev=rev*10+(*str -'0');
                str++;
        }
        return rev;
}
int main()
{
        char str[10];
        printf("enter the string:");
        scanf("%s",str);
        int res=str_int(str);
        printf("%d\n",res);

}