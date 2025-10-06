//toggle given range of bits
//n=0b11111111,i=2,j=4   o/p:0b11100011

#include<stdio.h>
#define TOGGLE_BIT(num,st,end) ((num)^((1<<(end-st+1))-1<<st))
int main()
{
        int num=0b11111111,st=2,end=4;
        printf("%b\n",num);

        printf("%b ",TOGGLE_BIT(num,st,end));
}
