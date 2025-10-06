/*Frequency of each element
 Write a C program to count the frequency of each element in an array.
Sample data:
Input: 1 2 2 3 3 3
Expected output:
1 occurs 1 time
2 occurs 2 times
3 occurs 3 times
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,freq[100]={0};
    printf("Enter number of elemnts: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory not allocated");
        return 1;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(freq[i]>0)
        printf("%d occurs %d times\n",freq[i],i);
    }
    free(arr);

}