#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        char str[100];
        printf("enter the string:\n");
        scanf("%s",str);
        int len=strlen(str);
        char *p=(char *)malloc(len+1);
        strcpy(p,str);
        printf("%s \n",p);
        free(p);
        return 0;
}