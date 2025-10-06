#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[100]={0};
    for(int i=0;i<n;i++)
    {
            int ptr=arr[i];
            freq[ptr]=1;
    }
    int flag=1;
    for(int i=1;i<=n;i++)
    {
            if(freq[i]==0)
            {
                printf("%d ",i);
                flag=0;
            }
    }
    return 0;
}