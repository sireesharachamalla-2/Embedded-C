#include<stdio.h>
typedef struct info
{
        char name[20];
        int id;
        float sal;
}EMP;
int main()
{
        EMP var,*ptr;
        ptr=&var;
        printf("enter the name:");
        scanf("%s",ptr->name);
        printf("enter the id:");
        scanf("%d",&ptr->id);
        printf("enter the sal:");
        scanf("%f",&ptr->sal);

        printf("\nname:%s id:%d salary:%.2f\n",ptr->name,ptr->id,ptr->sal);
}