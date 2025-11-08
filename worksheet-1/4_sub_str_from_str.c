#include<stdio.h>
#include<string.h>
int main()
{
        char str[]="today is a holyday";
        char sub[20];
        int start,len,i;
        printf("enter the start position:\n");
        scanf("%d",&start);
        printf("enter len of substring\n");
        scanf("%d",&len);
        for(i=0;i<len&&str[start+i]!='\0';i++)
        {
                sub[i]=str[start+i];
        }
        sub[i]='\0';
        printf("%s\n",sub);

}