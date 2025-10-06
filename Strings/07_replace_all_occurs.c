/*Replace all occurrences of a character with another in a string 
         Input: "banana", replace 'a' with 'o'
         Output: "bonono"
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    char *p=str,ch,ch1;
    printf("enter character ch1 to replace with ch: ");
    scanf(" %c",&ch1);
    scanf(" %c",&ch);
 while(*p)
 {
    if(*p==ch1)
    {
        *p=ch;
    }
    p++;
 } 
 printf("%s\n",str);
}