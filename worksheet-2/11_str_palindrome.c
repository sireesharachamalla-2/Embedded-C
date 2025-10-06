#include<stdio.h>
#include<string.h>
int isPalindrome(char *str)
{
    char *start=str;
    char *end=str+strlen(str)-1;
    while(start<end)
    {
        if(*start!=*end)
        return 0;
        start++;
        end--;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("enter string:\n");
    scanf("%s",str);
    if(isPalindrome(str))
    printf("string is palindrome\n");
    else
    printf("string is not palindrome\n");
    return 0;
    
}