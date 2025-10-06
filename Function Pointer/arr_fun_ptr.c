#include<stdio.h>
int add_num(int a,int b)
{
        int carry;;
        while(b)
        {
                carry=a&b;
                a=a^b;
                b=carry<<1;
        }
        return a;
}
void add()
{
        int a,b;
        printf("enter numbers:");
        scanf("%d%d",&a,&b);
        printf("sum=%d\n",add_num(a,b));
}

int check_palindrome(int num)
{
        int L=31,R=0,temp=num;
        for(L=31;L>=0;L--)
                if((num>>L)&1)
                        break;
        while(L>R)
        {
                if(((num>>L)&1)!=((num>>R)&1))
                        return 0;
                L--;
                R++;
        }
        return 1;
}
void setbit()
{
        int num,bit=31;
        printf("enter number:");
        scanf("%d",&num);
        int cnt=0,c1=0;
        for(int i=0;i<31;i++)
        {
                if(((num>>i)&1)==1)
                        c1++;
        }
        while(num--)
        {
                for(int i=31;i>=0;i--)
                {
                        if(((num>>i)&1)==1)
                        {
                                cnt++;
                        }
                }
                if(cnt==c1)
                        printf("%d ",num);
                cnt=0;
        }
}

void palindrome()
{
        int num;
        printf("enter number:");
        scanf("%d",&num);

        if(check_palindrome(num))
                printf("palindrome\n");
        else
                printf("not a palindrome\n");
}
int main()
{
        void(*menu[3])()={add,palindrome,setbit};
        int choice;
        while(1)
        {
                printf("1.add 2.check palindrome 3.set bit  4.exit\n");
                printf("enter choice\n");
                scanf("%d",&choice);
                if(choice==4)
                        break;
                if(choice>=1 || choice<=3)
                {
                        menu[choice-1]();
                }
                else
                {
                        printf("invalid\n");
                }
        }
        return 0;
}