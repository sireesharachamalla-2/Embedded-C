#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        char *str;
        int len,i;
        char temp;
        str=(char *)malloc(50*sizeof(char));
        if(str==NULL)
        {
                printf("memory allocation failed\n");
                return 1;
        }
        printf("enter a string:\n");
        scanf("%s",str);
        len=strlen(str);
        printf("reverse the string\n");
        for(i=0;i<len/2;i++)
        {
                temp=str[i];
                str[i]=str[len-1-i];
                str[len-1-i]=temp;
        }
        printf("%s\n",str);
        free(str);
        str=NULL;
        return 0;
}