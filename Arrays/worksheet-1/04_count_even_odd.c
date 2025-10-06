/*Count even and odd elements
 Write a C program to count how many even and odd numbers are in the array.
Sample data:
Input: 4 7 9 10 22
Expected output:
Even: 3
Odd: 2*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,EvenCnt=0,OddCnt=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory not allocated\n");
        return ;
    }
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if((arr[i]%2)==0)
        {
        EvenCnt++;
        }
        else
        {
        OddCnt++;
        }
    }
    printf("Even =%d\nOdd =%d\n",EvenCnt,OddCnt);

    free(arr);
}