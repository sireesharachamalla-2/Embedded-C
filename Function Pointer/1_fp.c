/*
Log Session four simple mathematical functions (add, subtract, multiply, divide) that accept two integer arguments and return an integer.
Use a single function pointer to dynamically select and execute one of these operations based on user input.
*/
#include<stdio.h>
int add(int a,int b)
{
        return a+b;
}
int sub(int a,int b)
{
        return a-b;
}
int mul(int a,int b)
{
        return a*b;
}
int div(int a,int b)
{
        return a/b;
}
int main()
{
    int choice,a,b;
   // (int)(*fun_ptr)(int,int);
    printf("emnter the value of a & b");
    scanf("%d%d",&a,&b);
    printf("enter the choice\n");
    printf("1.add 2.sub 3.mul 4.div \nenter choice:\n");
    scanf("%d",&choice);
   /* switch(choice)
    {
        case 1:fun_ptr=add;
        break;
        case 2:fun_ptr=sub;
        break;
        case 3:fun_ptr=mul;
        break;
        case 4:fun_ptr=div;
        break;
        default:printf("invalid input\n");

    }
    int res=fun_ptr(a,b);
*/
int (*fun_ptr[4])(int,int)={add,sub,mul,div};
int res=fun_ptr[choice-1](a,b);   
 printf("%d \n",res);
    return 0;
}