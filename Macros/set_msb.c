#include<stdio.h>
#define set(X,n) (X=(X|(1<<(n-1))))
int main()
{
        int num;
        scanf("%d",&num);
        printf("%b\n",set(num));
}