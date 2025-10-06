#include<stdio.h>
struct Data input(struct Data );
struct Data
{
        int age;
        char name[20];
        float sal;
};
int main()
{
        struct Data var;
        var=input(var);

        printf("age:%d \n",var.age);
         printf("name:%s \n",var.name);
          printf("sal:%.2f \n",var.sal);
}
struct Data input(struct Data var)
{
        printf("enter the age:\n");
        scanf("%d",&var.age);
        printf("enter the name:\n");
        scanf("%s",var.name);
        printf("enter the salary:\n");
        scanf("%f",&var.sal);
        return var;
}