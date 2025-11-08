/*
Reverse order of words in a given string
          Input: "hello world from C" 
         Output: "C from world hello"
*/

#include<stdio.h>
#include<string.h>
void reverse_str(char *s,char *e)
{
    char temp;
    while(s<e)
    {
        temp=*s;
        *s++=*e;
        *e--=temp;
    }
}
void rev_order(char *str)
{
    int len=strlen(str)-1;
    reverse_str(str,str+len);
    char *ptr=str;
    char *temp=str;
    while(*ptr)
    {
        if(*ptr==' ')
        {
        reverse_str(temp,ptr-1);
        temp=ptr+1;
        }
        ptr++;
    }
    reverse_str(temp,ptr-1);

}
int main()
{
    //char str[]="hello world from C";
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    rev_order(str);
    printf("%s\n",str);
}
