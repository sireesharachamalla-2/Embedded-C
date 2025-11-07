#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
    return head;
}

void display(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }

}
void removeDuplicates(struct Node* head) {
    struct Node *ptr1, *ptr2, *dup;

    ptr1 = head;
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
        while (ptr2->next != NULL) {
            if (ptr1->data == ptr2->next->data) {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                free(dup);
            } else {
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
}

int main() {
    struct Node* head = NULL;
    int n, data, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &data);
        head = insertEnd(head, data);
    }

    printf("\nOriginal list:\n");
    display(head);

    removeDuplicates(head);

    printf("\nList after removing duplicates:\n");
    display(head);
     struct Node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}