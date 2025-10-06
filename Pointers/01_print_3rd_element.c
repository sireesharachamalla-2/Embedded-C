/*print third element in an array
int arr[]={1,2,3,4,5}
o/p:3
*/
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int *ptr=&arr;
    printf("%d ",ptr+3);
    
}