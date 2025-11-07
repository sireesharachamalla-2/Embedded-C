#include<stdio.h>
#include<string.h>
int main()
{
        char str[100];
        printf("enter string:\n");
        fgets(str,100,stdin);
        str[strlen(str)-1]='\0';
        int len;
        char *ptr=str,*word;
        int max=0;
        for(ptr=str;ptr=strtok(ptr," ");ptr=NULL)
        {
                len=strlen(ptr);
                if(len>max)
                {
                        max=len;
                        word=ptr;
                }
        }
        printf("%s \n",word);
}