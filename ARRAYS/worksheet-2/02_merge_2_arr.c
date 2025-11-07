/*Write a C program to merge two arrays into a third array.
Sample data:
Array 1: 1 2 3
Array 2: 4 5 6
Expected output:
Merged array: 1 2 3 4 5 6
*/
#include<stdio.h>
void merge_arr(int arr1[],int arr2[],int n1,int n2,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while()
}
int main()
{
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr[n1+n2];
    merge_arr(arr1,arr2,n1,n2,arr3);
}