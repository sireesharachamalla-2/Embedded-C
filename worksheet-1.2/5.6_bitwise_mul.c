//multiply number with 10
#include<stdio.h>
#define MUL(n) ((n<<3)+(n<<1))
int main()
{
        int num;
        printf("enter num");
        scanf("%d",&num);
        printf("multiply by 10 is %d\n",MUL(num));
}