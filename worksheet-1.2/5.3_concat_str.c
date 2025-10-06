#include<stdio.h>
#include<string.h>
int main()
{
        char str[]="Hello";
        char str2[]="World!";
        char *ptr=str,*ptr2=str2;
        while(*ptr!='\0')
        {
                ptr++;
        }
        while(*ptr2!='\0')
        {
                *ptr=*ptr2;
                ptr2++;
                ptr++;
        }
        ptr='\0';
        printf("%s",str);
}