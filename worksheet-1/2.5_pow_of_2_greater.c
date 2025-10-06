#include<stdio.h>
int main()
{
        int num;
        printf("enter number:");
        scanf("%d",&num);
        int n;
        printf("greatest or equl to %d\n",greatest(num));
}
int greatest(int num)
{
        if(num==0)
                return 1;
        else if((num&(num-1))==0)
                return num;
        int power=1;
        while(power<num)
        {
                power<<=1;
        }
        return power;

}