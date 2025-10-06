//define a macro that multiplies an integer by 3.5 using only bitwise shift operations
//n=4   o/p:14
//n=10  o/p:35
//n<<1  --2  n --1  n>>1  --0.5


#include<stdio.h>
#define MUL_3_5(num)  ((num<<1)+(num)+(num>>1))
int main()
{
        int num;
        printf("enter num:");
        scanf("%d",&num);
        printf("%d ",MUL_3_5(num));
}