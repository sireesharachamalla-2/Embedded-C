#include <stdio.h>
struct student{
    int marks;
};

int main()
{
    struct student arr[20];
    int n;
    printf("enter how many students:");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i].marks);
        sum=sum+arr[i].marks;
    }
    int avg=sum/n;
    printf("%d",avg);

    return 0;
}