#include<stdio.h>
#include<string.h>
int main()
{
        char str[100]="today is tuesday having no holiday";
        char sub[20];
        printf("enter the substring\n");
        scanf("%s",sub);
        char *ptr=str;
        int len=strlen(sub);
        while((ptr=strstr(ptr,sub))!=NULL)
        {
                printf("occur at %lu\n",ptr-str);
                ptr+=len;
        }
}