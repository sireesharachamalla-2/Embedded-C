#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *nxt;
};
struct Node *nth_node_last(struct Node *head)
{
    int n;
    printf("enetr nth node number");
    scanf("%d",&n);
    struct Node *temp=head;
    while(temp->nxt!=NULL)
    {
        temp=temp->nxt;
    }
    for(int i=0;i<n;i++)
    {
        iF(temp==NULL)
        {
            return nULL;
        }
        temp=temp->prev;
    }
    return temp;
}
int main()
{
    struct Node *head=NULL;
  //  head=Insert_first(head);
   // head=(Insert_first(head));
    head=nth_node_last(head);
}