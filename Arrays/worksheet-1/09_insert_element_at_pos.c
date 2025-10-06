/*Insert element at position
Question description: Write a C program to insert a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Insert: 25 at position 2
Expected output:
Array after insertion: 10 20 25 30 40
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,pos,val;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory not allocated\n");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element and position to insert: ");
    scanf("%d%d",&val,&pos);
    if(pos<1 ||pos>n+1)
    {
        printf("invalid position");
        free(arr);
        return 1;
    }
    arr=(int *)realloc(arr,(n+1)*sizeof(int));
    for(i=n;i>pos;i--)
    {          
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
}