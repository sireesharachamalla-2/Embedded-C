#include<stdio.h>
#include<string.h>
void rev(char *start,char *end)
{
        while(start<end)
        {
                char temp=*start;
                *start=*end;
                *end=temp;
                start++;
                end--;
        }
}
void str_rev(char *str)
{
        char *start=str;
        char *temp=str;
        rev(str,str+strlen(str)-1);

        while(*temp)
        {
                if(*temp==' ')
                {
                rev(start,temp-1);
                start=temp+1;
                }
        temp++;
        }
        rev(start,temp-1);
}

int main()
{
        char str[]="this is bitsilica";
        str_rev(str);
        printf("%s\n",str);
}