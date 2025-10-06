#include<stdio.h>
#include<string.h>
struct Student{
        int id;
        char name[20];
        float marks;
};
int main()
{
        struct Student s1={1,"aaa",77.9};
        struct Student s2={2,"bbb",90.4};
        struct Student s3={3,"ccc",76.32};
        struct Student *ptr[3];
        ptr[0]=&s1;
        ptr[1]=&s2;
        ptr[2]=&s3;

           for (int i = 0; i < 3; i++)
           {
                printf("ID: %d\tName: %s\tMarks: %.2f\n",ptr[i]->id, ptr[i]->name, ptr[i]->marks);
    }

    return 0;
}