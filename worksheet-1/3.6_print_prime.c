#include<stdio.h>
int isPrime(int num)
{
        int i;
        for(i=2;i<num;i++)
        {
                if(num%i==0)
                        return 0;
        }
        return 1;
}
int main()
{
        int N;
        printf("enter the number of primes\n");
        scanf("%d",&N);
        for(int i=1;i<N;i++)
        {
                if(isPrime(i))
                        printf("%d ",i);
        }
        return 0;
}