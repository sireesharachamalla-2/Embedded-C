#include<stdio.h>
int CntBit(int res)
{
        int cnt=0;
        while(res)
        {
                res=res&(res-1);
                cnt++;
        }
        return cnt;
}
int main()
{
        int A=10110;
        int B=11101;
        int res=A^B;
        printf("cnt bits flipped is %d\n",CntBit(res));
        return 0;
}