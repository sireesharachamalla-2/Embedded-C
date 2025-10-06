#include<stdio.h>
#include<math.h>
int main()
{
        int num;
        printf("enter binary number:\n");
        scanf("%b",&num);
        int d=0;
        for(int i=0;i<32;i++)
        {
                d+=((num>>i)&1)*pow(2,i);
        }
        printf("%d ",d);
}