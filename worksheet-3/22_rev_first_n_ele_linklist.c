
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct Node* reverseK(struct Node* head, int k, int reverse) {
    if (head == NULL)
        return NULL;

    struct Node* current = head;
    struct Node* prev = NULL;
    struct Node* next = NULL;
    int count = 0;

    if (reverse) {
        while (current != NULL && count < k) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }
        head->next = reverseK(current, k, 0); 
        return prev;
    } else {
        while (current != NULL ) {
            current = current->next;
            count++;
        }
        return head;
    }
}

int main() {
    struct Node* head = NULL;
    int n, val, k;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter node elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        insertEnd(&head, val);
    }

    printf("Enter k value: ");
    scanf("%d", &k);

    head = reverseK(head, k, 1);

    printf("Modified List:\n");
    printList(head);

    return 0;
}