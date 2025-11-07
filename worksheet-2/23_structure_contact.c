#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Contact {
    char name[50];
    long long int phone;                                                        char email[50];
};                                                                                                                                                      struct Contact* createContact(char *name, long long int phone, char *email) {
    struct Contact *newContact = (struct Contact*)malloc(sizeof(struct Contact));
    if (newContact == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    strcpy(newContact->name, name);
    newContact->phone = phone;
    strcpy(newContact->email, email);
    return newContact;                                                      }                                                                                                                                                       void displayContact(struct Contact *c) {
    printf("Name: %s\nPhone: %lld\nEmail: %s\n", c->name, c->phone, c->email
);
}

void searchByName(struct Contact *contacts[], int count, char *key) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i]->name, key) == 0) {
            printf("\nContact found:\n");
            displayContact(contacts[i]);
            found = 1;
            break;
        }
             break;
        }
    }
    if (!found)
        printf("\nNo contact found  '%s'.\n", key);
}

void searchByPhone(struct Contact *contacts[], int count, long long int key) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (contacts[i]->phone == key) {
            printf("\nContact found:\n");
            displayContact(contacts[i]);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("\nNo contact found with phone %lld.\n", key);
}

int main() {
    struct Contact *contacts[MAX];
    int count = 0, choice;
    char name[50], email[50];
    long long int phone, keyPhone;
    char keyName[50];

    while (1) {
        printf("\n Contact Management System \n");
        printf("1. Add Contact\n2. Search by Name\n3. Search by Phone \n4. Display\n 5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
         switch (choice) {
        case 1:
            if (count >= MAX) {
                printf("Contact list full!\n");
                break;
            }
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter phone number: ");
            scanf("%lld", &phone);
            printf("Enter email: ");
            scanf("%s", email);
            contacts[count++] = createContact(name, phone, email);
            printf("Contact added successfully!\n");
            break;

        case 2:
            printf("Enter name to search: ");
            scanf("%s", keyName);
            searchByName(contacts, count, keyName);
            break;

        case 3:
            printf("Enter phone number to search: ");
            scanf("%lld", &keyPhone);
            searchByPhone(contacts, count, keyPhone);
            break;

        case 4:
            if (count == 0)
                printf("No contacts available.\n");
            else {
                printf("\n--- All Contacts ---\n");
                for (int i = 0; i < count; i++) {
                    printf("\nContact %d:\n", i + 1);
                    displayContact(contacts[i]);
                }
                }
            }
            break;

        case 5:
            printf("Exiting...\n");
            for (int i = 0; i < count; i++)
                free(contacts[i]);
            exit(0);

        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}