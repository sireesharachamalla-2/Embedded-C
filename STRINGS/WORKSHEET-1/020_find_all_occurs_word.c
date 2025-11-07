/*Find the all occurrences of a word in string
i/p:"the sky is the limit in the sky" search:the
o/p:found at 0,15,30
*/
#include<stdio.h>
int main()
{
    char str[100],word[20];
    printf("Enter the string: \n");
    scanf("%[^\n]s",str);
    getchar();
    printf("Enetr the word you search for: ");
    scanf("%s",word);
    char *p=str,pos=1;
    printf("Found at ");
    while((p=strstr(p,word))!=NULL)
    {
        printf("%s%d",pos?"":",",(int)p-str);
        pos=0;
        p=p+strlen(word);
    }
}