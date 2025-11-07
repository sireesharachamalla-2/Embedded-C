#include<stdio.h>
void add(int a,int b)
{
        printf("sum=%d\n",a+b);
}
void sub(int a,int b)
{
        printf("sub=%d\n",a-b);
}
int main()
{
        void (*calc[2])(int,int)={add,sub};
        int choice,a,b;
        printf("enter two numbers:\n");
        scanf("%d%d",&a,&b);
        printf("1.add 2.sub\n");
        printf("enter choice:\n");
        scanf("%d",&choice);
        if(choice>=1 && choice<=2)
                (*calc[choice-1])(a,b);
        else
                printf("invalid \n");
        return 0;
}