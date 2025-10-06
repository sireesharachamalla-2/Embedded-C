/*1. Pointer Declaration and Initialization
Goal: Declare pointers for various data types and initialize them properly to point to existing variables or dynamically allocated memory. Use pointer arithmetic and typecasting appropriately.

Activity:
Declare pointers to different data types (int, float, char).
Dynamically allocate memory for these pointers.
Assign addresses of variables to pointers and access their values through the pointers.
Perform pointer arithmetic to move through allocated memory blocks.
Use typecasting to convert pointers between compatible types.
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *iptr;
    float *fptr;
    char *cptr;
    iptr=(int *)malloc(3*sizeof(int));
    fptr=(float *)malloc(3*sizeof(float));
    cptr=(char *)malloc(3*sizeof(char));
    if(!iptr && !fptr && !cptr)
    {
        printf("memory allocation failed\n");
        return 1;

    }
    for(int i=0;i<3;i++)
    {
        *(iptr+i)=(i+1);
        *(fptr+i)=(i+1)*1.1f;
        *(cptr+i)=(i+'A');
    }
    for(int i=0;i<3;i++)
    {
        printf("%d %1.1f %c\n",(*ptr+i),(*fptr+i),*(cptr+i));
    }
    int a=10;
    float b=1.2;
    char c='A';
    iptr=&a;
    fptr=&b;
    cptr=&c;
    printf("%d %f %c\n",*iptr,*fptr,*cptr);

}