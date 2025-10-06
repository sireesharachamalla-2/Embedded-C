#include<stdio.h>
#include<string.h>
int main()
{
        int ch;
        printf("enter ascii value:\n");
        scanf("%d",&ch);
        if(ch<0 || ch>127)
                printf("invalid\n");
        char val=(char)ch;
        switch(1)
        {
                case 1:if(ch>=48 && ch<=57)
                               printf("it is digit\n");
                       else if(ch>=65 && ch<=90)
                               printf("upper case alphabet\n");
                       else if(ch>=97 && ch<=122)
                               printf("lower case alphabet\n");
                       else if(ch==32)
                               printf("space\n");
                       else
                               printf("special character\n");
                       break;
        }
        return 0;
}
~