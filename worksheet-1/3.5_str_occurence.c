#include<stdio.h>
#include<string.h>
int main()
{
        char str[30];
        printf("enterr string\n");
        fgets(str,30,stdin);
        str[strlen(str)-1]='\0';
        int cnt=0;
        char ch;
        printf("enter character to search\n");
        scanf("%c",&ch);
        for(int i=0;str[i]!='\0';i++)
        {
                if(str[i]==ch)
                        cnt++;
        }
        printf("%c occurs at %d times\n",ch,cnt);

        return 0;
}