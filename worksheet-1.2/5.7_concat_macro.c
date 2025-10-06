#include<stdio.h>
#include<string.h>
#define CONCAT(des,a,b) \
        strcpy(des,a);\
        strcat(des,b);
int main()
{
//      char str[]="Hello" "world";
//      char str2[]="World";
//      printf("%s\n",str);
        char res[40];
        char str1[]="Hello";
        char str2[]="World!";
        CONCAT(res,str1,str2);
        printf("%s \n",res);
        return 0;
}