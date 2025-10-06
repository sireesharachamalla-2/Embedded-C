#include<stdio.h>
#define set(X) (X=(X|1))
int main()
{
        int num;
        scanf("%d",&num);
        printf("%b\n",set(num));
}
