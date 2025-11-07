/*swap 2 strings without using any extra temporary variable string
i/p:str1="hello" str2="world"
o/p:str1="world" str2="hello"
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("enter 2 strings: ");
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s",str2);
    printf("%s %s before swap\n",str1,str2);
    int len=strlen(str1);
    strcat(str1,str2);
    strcpy(str2,str1);
    str2[len]='\0';
    memmove(str1,str1+len,strlen(str1+len)+1);
    printf("After swapping: %s %s\n",str1,str2);
}