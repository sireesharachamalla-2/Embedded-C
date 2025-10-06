#include<stdio.h>
#define clear(X,i) (X=(X&(1<<(i-1))-1))
int main()
{
        int num,i;
        scanf("%d%d",&num,&i);
        printf("%b\n",clear(num,i));
}