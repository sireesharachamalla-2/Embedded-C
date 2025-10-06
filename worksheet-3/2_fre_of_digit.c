
#include <stdio.h>

int main()
{
    long long n;
    printf("enter a number:");
    scanf("%lld",&n);
    int arr[10]={0};
    while(n!=0){
        int digit=n%10;
        arr[digit]++;
        n=n/10;
    }
    for(int i=0;i<10;i++){
        if(arr[i]>0){
            printf("%d:%d times\n",i,arr[i]);
        }
    }

    return 0;
}