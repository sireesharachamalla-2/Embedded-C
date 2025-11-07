#include<stdio.h>
int add(int a,int b)
{
        return a+b;
}
int sub(int a,int b)
{
        return a-b;
}
void calc(int a,int b,int(*operation)(int,int))
{
        printf("%d",operation(a,b));
}
int main()
{
        int a,b;
        printf("enter a & b values\n");
        scanf("%d%d",&a,&b);
        calc(a,b,add);
        calc(a,b,sub);
}