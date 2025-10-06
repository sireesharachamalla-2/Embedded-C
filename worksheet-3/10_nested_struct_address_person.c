#include <stdio.h>
#include <string.h>

struct Location {
    char city[30];
    char state[30];
    int pin;
};

struct Person {
    char name[50];
    int age;
    struct Location address;  
};

int main() {
    struct Person p;

    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = 0; 

    printf("Enter age: ");
    scanf("%d", &p.age);
    getchar();  

    printf("Enter city: ");
    fgets(p.address.city, sizeof(p.address.city), stdin);
    p.address.city[strcspn(p.address.city, "\n")] = 0; 

    printf("Enter state: ");
    fgets(p.address.state, sizeof(p.address.state), stdin);
    p.address.state[strcspn(p.address.state, "\n")] = 0; 

    printf("Enter pin: ");
    scanf("%d", &p.address.pin);

    printf("Name : %s\n", p.name);
    printf("Age  : %d\n", p.age);
    printf("City : %s\n", p.address.city);
    printf("State: %s\n", p.address.state);
    printf("PIN  : %d\n", p.address.pin);

    return 0;
}
