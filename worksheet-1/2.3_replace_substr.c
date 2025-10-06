#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
        char str[50];
        char sub[10];
        char substr[10];
        printf("enter the string:");
        scanf("%[^\n]s",str);
        printf("enter sub string");
        __fpurge(stdin);
        scanf("%[^\n]s",sub);
        printf("enetr substring to relace");
        scanf(" %s",substr);
        char *ptr;
        int len=strlen(sub);
        int len1=strlen(substr);
        while((ptr=strstr(str,sub))!=NULL)
        {
                strncpy(ptr,substr,len1);
                ptr+=len;
        }
        printf("%s\n",str);
}