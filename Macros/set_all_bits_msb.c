#include<stdio.h>
#define set(num,n) (num=(num^(1<<(n-1))))
int main()
{
    int num,n;
    scanf("%d",&num,&n);
    printf("%b\n",set(num,n));
}