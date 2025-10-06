#include<stdio.h>
#include<string.h>
int main()
{
        char str[50];
        printf("Enter string");
        scanf("%[^\n]s",str);
        int pos;
        printf("enter number of times rotate an array\n");
        scanf("%d",&pos);
        rotate_str(str,pos);
        printf("%s \n",str);
}
void rotate_str(char str[],int n)
{
        int len=strlen(str);
        n=n%len;
        char ch;
        for(int i=0;i<n;i++)
        {
                ch=str[0];
                for(int j=0;j<len-1;j++)
                {
                        str[j]=str[j+1];
                }
                str[len-1]=ch;
        }
        printf("%s\n",str);
}