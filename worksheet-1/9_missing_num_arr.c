#include<stdio.h>
int main()
{

        int arr[]={1,2,4,5};
        int n=5;
        int xor1=0,xor2=0,i;
        for(i=1;i<=n;i++)
        {
                xor1^=i;
        }
        for(i=0;i<n-1;i++)
        {
                xor2^=arr[i];
        }
        int missing=xor1^xor2;
        printf("missing element %d\n",missing);

        return 0;

}
