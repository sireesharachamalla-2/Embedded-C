#include <stdio.h>
struct person{
    char name[20];
    int age;
};
void swap(struct person *p1,struct person *p2){
    struct person temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main()
{
    struct person p1={"mounika",26};
    struct person p2={"deepika",25};
    swap(&p1,&p2);
    printf("%s ,%d ",p1.name,p1.age);
    printf("\n%s ,%d ",p2.name,p2.age);
    
    return 0;
}