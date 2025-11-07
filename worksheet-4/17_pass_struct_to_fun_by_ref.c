#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[30];
    float marks;
};
void update(struct Student *s, float newMarks)
{
    s->marks = newMarks;
    printf("Marks updated %s\n", s->name);
}

void display(const struct Student *s) {
    printf("ID: %d Name: %s Marks: %.2f\n", s->id, s->name, s->marks);
}

int main() {
    struct Student s1;

    s1.id = 101;
    strcpy(s1.name, "Aaa");
    s1.marks = 88.5;

    printf("Before update:\n");
    display(&s1);

    update(&s1, 95.0);

    printf("\nAfter update:\n");
    display(&s1);

    return 0;
}