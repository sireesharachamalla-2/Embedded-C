#include<stdio.h>
int sub(int a,int b)
{
        while(b!=0)
        {
                int carry=(~a)&b;
                a=a^b;
                b=carry<<1;
        }
        return a;
}
int main()
{
        int x,y;
        printf("enter x and y \n");
        scanf("%d%d",&x,&y);
        printf("%d - %d = %d \n",x,y,sub(x,y));
}