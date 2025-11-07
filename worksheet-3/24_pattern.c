

#include <stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==1){
                printf("%d ",2*j-1);
            }
            else if(i%2==0){
                printf("%d ",2*j);
            }
        }
        printf("\n");
    }

    return 0;
}