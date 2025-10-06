#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
        int num;
        srand(getpid());
        num=rand()%100;
        printf("the random number is %d\n",num);
}