
#include <stdio.h>

int main()
{
    const char *arr[]={"red","yellow","green","blue"};
    int l=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<l;i++){
        printf("\n%d, %s",i+1,arr[i]);
    }

    return 0;
}