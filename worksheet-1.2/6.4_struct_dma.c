#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
        char name[20];
        int age;
}DATA;

int main()
{
        DATA *ptr;
        ptr=(DATA *)malloc(sizeof(DATA));
        if(ptr==NULL)
        {
                printf("Memory allocation failed\n");
                return 1;
        }
        printf("enter the name:\n");
        scanf("%s",ptr->name);
        printf("enter age:\n");
        scanf("%d",&ptr->age);


        printf("\nName=%s\n",ptr->name);
        printf("age=%d\n",ptr->age);

        free(ptr);
        return 0;
}