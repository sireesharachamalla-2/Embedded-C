#include<stdio.h>
#include<string.h>
int Expand(char str[], int left, int right, int *start)
{
    int n = strlen(str);
    while (left >= 0 && right < n && str[left] == str[right])
    {
        left--;
        right++;
    }
    // After while loop, left and right go 1 step too far
    int len = right - left - 1;
    if (len > *start) // store new start position
        *start = left + 1;
    return len;
}

void long_palindrome(char str[])
{
        int n=strlen(str);
        if(n==0)
                return;
        int start=0,max=1,temp;
        for(int i=0;i<n;i++)
        {
                temp=start;
                int len1=Expand(str,i,i,&temp);
                int len2=Expand(str,i,i+1,&temp);
                int len=(len1>len2)?len1:len2;
        }
        if(n>max)
        {
                max=n;
                start=temp;
        }
        for (int i = start; i < start + max; i++)
        putchar(str[i]);
    printf("\n");
}
int main()
{
        char str[100]="forgeeksskeegfor";
        long_palindrome(str);
        return 0;
}