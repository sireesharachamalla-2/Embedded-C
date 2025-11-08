/*Remove all occurrence of a word in given string
           Input: "hello world hello universe", remove: "hello"
          Output: "world universe"
          */
         #include<stdio.h>
         #include<string.h>
         void remove_word(char *str,char *word)
         {
            char *p;
            int len=strlen(word);
            while((p=strstr(str,word))!=NULL)
            {
                memmove(p,p+len,strlen(p+len)+1);
            }

         }
         int main()
         {
          char str[100],rem[30];
          printf("Enter the string and word\n");
          scanf("%[^\n]s",str);
          scanf("%s",rem);
          remove_word(str,rem);
          printf("%s\n",str);
         }