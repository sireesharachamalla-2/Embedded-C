/*
Define a function processArray that accepts an integer array, its size, and a callback function as arguments.
Implement callback functions (increment, doubleValue) that modify array elements in different ways.
Demonstrate invoking processArray with different callback functions.
*/
#include<stdio.h>
#include<stdlib.h>

typedef void (*Callback)(int *);
void increment(int *p)
{
    (*p)++;
}
void doubleValue(int *p)
{
    (*p)*=2;
}
void ProcessArray(int arr[],int n,Callback func)
{
    for(int i=0;i<n;i++)
    {
        func(&arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    ProcessArray(arr,n,increment);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
     ProcessArray(arr,n,doubleValue);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
   
}