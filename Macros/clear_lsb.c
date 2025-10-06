#include<stdio.h>
#define clear(X) (X=(X&(~1)))
int main()
{
        int num;
        scanf("%d",&num);
        printf("%b\n",clear(num));
}