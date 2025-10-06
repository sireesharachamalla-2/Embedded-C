/* Array and Pointer Arithmetic
Goal: Traverse and manipulate arrays by using pointers and pointer arithmetic instead of array indexing.
Log Session an array of integers.
Use a pointer to iterate through the array elements by incrementing the pointer.
Perform operations like summing the elements or modifying them using only the pointer (no array indices).
Implement a function that receives a pointer and size to reverse the array elements in place.
3. Pointer to Pointer (Double Pointer)
*/
#include<stdio.h>
void fun(int *ptr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}
int main()
{
  int arr[]={1,2,3,4,5};
    int *ptr=&arr;
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(ptr+i));
    }
    ptr=arr;
    for(int i=0;i<5;i++)
    {
        *(ptr+i)=*(ptr+i)+2

    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=*(ptr+i);
    }
    printf("sum id %d\n",sum);
    fun(arr,5);
    int **dptr;
    dptr=&ptr;
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(*dptr+i));
    }
}