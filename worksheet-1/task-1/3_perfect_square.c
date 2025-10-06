#include<stdio.h>
#include<math.h>
int main()
{
        int num;
        printf("enter the number:");
        scanf("%d",&num);
        if(num<0)
        {
                return 0;
        }
        int res=sqrt(num);

        if(res*res==num)
                printf("%d is a perfect square\n",num);
        else
                printf("%d is not  a perfect square\n",num);
        return 0;

}