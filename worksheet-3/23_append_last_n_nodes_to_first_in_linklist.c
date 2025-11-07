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
    struct Node* node = createNode(data);
    if (*head == NULL) {
        *head = node;
        return;
    }
    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = node;
}

void printList(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void appendLastN(struct Node** head, int n) {
    

    struct Node* fast = *head;
    struct Node* slow = *head;

    // Move fast n steps ahead
    for (int i = 0; i < n; i++) {
        if (fast->next)
            fast = fast->next;
        else
            return; 
    }

    while (fast->next) {
        fast = fast->next;
        slow = slow->next;
    }

    struct Node* newHead = slow->next;
    slow->next = NULL;
    fast->next = *head;
    *head = newHead;
}

int main() {
    struct Node* head = NULL;
    int n, val, count, k;

    printf("Enter number of nodes: ");
    scanf("%d", &count);

    printf("Enter node elements:\n");
    for (int i = 0; i < count; i++) {
        scanf("%d", &val);
        insertEnd(&head, val);
    }

    printf("enter how many nodes moves: ");
    scanf("%d", &k);

    printf("\noriginal List: ");
    printList(head);

    appendLastN(&head, k);

    printf("after moving List: ");
    printList(head);

    return 0;
}