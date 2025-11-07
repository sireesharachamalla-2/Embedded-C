#include<stdio.h>
#include<stdlib.h>
int main()
{
        int *ptr=(int *)malloc(1*sizeof(int));
        if(ptr==NULL)
        {
                printf("memory not allocated\n");
                return 1;
        }
        *ptr=4;
        printf("%d \n",*ptr);

        free(ptr);
        return 0;
}