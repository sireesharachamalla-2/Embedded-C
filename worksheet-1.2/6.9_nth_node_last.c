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
        printf("%d  ", head->data);
        head = head->next;
    }
}
void findNthFromEnd(struct Node* head, int n) {
    struct Node *first = head, *second = head;
    int count = 0;

    for (count = 0; count < n; count++) {
        if (first == NULL) {
            printf("List has less nodes.\n");
            return;
        }
        first = first->next;
    }

    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    printf("The %dth node from the end is: %d\n", n, second->data);
}

int main() {
    struct Node* head = NULL;
    int n, data, numNodes, i;

    printf("Enter number of nodes: ");
    scanf("%d", &numNodes);

    printf("Enter %d elements:\n", numNodes);
    for (i = 0; i < numNodes; i++) {
        scanf("%d", &data);
        head = insertEnd(head, data);
    }
     printf("\nLinked List:\n");
    display(head);

    printf("\nEnter n (to find nth node from end): ");
    scanf("%d", &n);

    findNthFromEnd(head, n);

    struct Node *temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}