#include<stdio.h>
#define SET_NIBBLE(NUM) ((NUM)|(0X0F))
int main()
{
    int num=ob101110001001;
    int res=SET_NIBBLE(num);
    printf("%b\n",res);
}