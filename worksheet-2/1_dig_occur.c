#include<stdio.h>
int main()
{
        long int num;
        int dig,cnt=0,rem;
        printf("enter number:\n");
        scanf("%ld",&num);
        printf("enter digit\n");
        scanf("%d",&dig);
        long int temp=num;
        while(temp)
        {
                rem=temp%10;
                if(rem==dig)
                        cnt++;
                temp/=10;
        }
        printf("%d times\n",cnt);
        return 0;
}