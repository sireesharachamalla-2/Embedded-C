/* Find first occurrence of a word in a given string
         Input: "this is a test string", word: "test"
         Output: Found at position 11*/

         #include<stdio.h>
         #include<string.h>
         int main()
         {
            char str[100],substr[30];
            scanf("%[^\n]s",str);
            scanf("%s",substr);
            char *ptr=strstr(str,substr);
            if(p)
            {
                printf("Found at %d\n",ptr-str);
            }
            else
            {
                printf("not found\n");
            }
            return 0;
                                                                                                                            
         } 