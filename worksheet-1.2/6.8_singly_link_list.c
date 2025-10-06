#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
};
struct node *createNode(int data)
{
        struct node *nu=(struct node *)malloc(sizeof(struct node));
        nu->data=data;
        nu->next=NULL;
        return nu;
}

struct node *insertEnd(struct node *head,int data)
{
        struct node *nu=createNode(data);
        if(head==NULL)
                return nu;
        struct node* temp=head;
        while(temp->next)
                temp=temp->next;
        temp->next=nu;
        return head;
}

void display(struct node *head)
{
        while(head)
        {
                printf("%d ",head->data);
                head=head->next;
        }
}

struct node* reverseNode(struct node *head,int left,int right)
{
        if(head==NULL || left==right)
                return head;

        struct node temp;
        temp.next=head;
        struct node *prev=&temp;

        for(int i=1;i<left;i++)
                prev=prev->next;
        struct node *cur=prev->next;
        struct node *next=NULL;
        struct node *sub=NULL;

        for (int i = 0; i <= right - left; i++) {
        next = cur->next;
        cur->next = sub;
        sub = cur;
        cur = next;
        }

        prev->next->next = cur;
    prev->next = sub;

    return temp.next;
}
int main()
{
    struct Node* head = NULL;
    int n, i, data, left, right;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &data);
        head = insertEnd(head, data);
    }

    printf("\nOriginal List:\n");
    display(head);

    printf("\nEnter left and right positions to reverse: ");
    scanf("%d %d", &left, &right);

    head = reverseBetween(head, left, right);

    printf("\nList after reversing from position %d to %d:\n", left, right);
    display(head);
     struct Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}