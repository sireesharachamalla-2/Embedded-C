#include<stdio.h>

struct Person{
        char name[20];
        int age;
};
void sortByAge(struct Person *p, int n) {
    int i, j;
    struct Person temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((p + i)->age > (p + j)->age) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

void display(struct Person *p, int n) {
    printf("\nSorted list :\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\n", (p + i)->name, (p + i)->age);
    }
}
int main() {
    struct Person people[5];
    int n, i;

    printf("Enter number of persons: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name of person %d: ", i + 1);
        scanf("%s", people[i].name);
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &people[i].age);
    }

    sortByAge(people, n);
    display(people, n);

    return 0;
}