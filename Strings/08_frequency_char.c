/*Count frequency of each character in a string
         Input: "success"
         Output:
          s = 3
         u = 1
         c = 2
         e = 1*/
         #include<stdio.h>
         #include<string.h>
         int main()
         {
            char str[100];
            int i;
            scanf("%[^\n]s",str);
            char freq[256]={0};
            for(i=0;str[i]!='\0';i++)
            {
                freq[(unsigned char)str[i]]++;
            }
            for(i=0;i<256;i++)
            {
                if(freq[i]>0)
                {
                    printf("%c-> %d times\n",i,freq[i]);
                }
            }
         }