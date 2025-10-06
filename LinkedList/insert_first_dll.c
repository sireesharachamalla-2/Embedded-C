#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *nxt;
};
struct Node *insert_first(struct Node *head)
{
    struct Node *temp=NULL,*nu=NULL;
    nu=(struct Node *)calloc(1,sizeof(struct Node *));
    if(nu==NULL)
    {
        printf("node not created\n");
        return 0;
    }
    else{
        printf("enter data to insert\n");
        scanf("%d",&nu->data);
    }
    if(head==NULL)
    {
        printf("list is empty\n");
        head=nu;
    }
    else{
        temp=head;
        head=nu;
        nu->nxt=temp;
        temp->prev=nu;
    }
    return head;
}
int main()
{
    struct Node *head=NULL;
    head=insert_first(head);
    head=insert_first(head);
    printf("%d",head->data);
return 0;
}