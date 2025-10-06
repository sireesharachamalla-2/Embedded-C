
#include <stdio.h>
#define TOGGLE(num,n) num^(1<<n)
int main()
{
    int num,n;
    printf("enter a number:");
    scanf("%d",&num);
    printf("enter n bit of a number:");
    scanf("%d",&n);
    printf("%d",TOGGLE(num,n));

    return 0;
}