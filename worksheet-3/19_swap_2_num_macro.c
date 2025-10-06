
#include <stdio.h>
#define SWAP(a,b) int temp = a; a = b; b = temp;
int main()
{
    int a,b;
    printf("enter a and b values:");
    scanf("%d %d",&a,&b);
    SWAP(a,b);
    printf("a:%d b:%d",a,b);

    return 0;
}