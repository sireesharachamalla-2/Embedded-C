#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

void student_data(struct Student *s) {
    printf("enter name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = 0;  

    printf("enter age: ");
    scanf("%d", &s->age);

}
void display(struct Student *s) {

    printf("name  : %s\n", s->name);
    printf("age   : %d\n", s->age);
}

int main() {
    struct Student stu;
    student_data(&stu); 
    display(&stu);

    return 0;
}