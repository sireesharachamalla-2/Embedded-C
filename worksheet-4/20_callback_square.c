#include<stdio.h>
int square(int n)
{
        return n*n;
}
void compute(int (*callback)(int),int val)
{
        int res=callback(val);
        printf("square of %d is %d\n",val,res);
}
int main()
{
        int num;
        printf("enter num:\n");
        scanf("%d",&num);
        compute(square,num);
        return 0;
}