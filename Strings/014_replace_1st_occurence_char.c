/*
Replace first occurrence of a character with another in a string
         Input: "google", replace 'o' with 'a'
 
         Output: "gagole"*/
         #include<stdio.h>
         #include<string.h>
         int main()
         {
            char str[100],ch,temp;
            printf("enter string: ");
            scanf("%[^\n]s",str);
            printf("enter character to search :");
            scanf("%c",&ch);
            printf("enter character to replace :");
            scanf("%c",&temp);
            for(char *p=str;*p;p++)
            {
                if(*p==ch)
                {
                    *p=temp;
                    break;
                }
            }
            printf("%s\n",str);
         }