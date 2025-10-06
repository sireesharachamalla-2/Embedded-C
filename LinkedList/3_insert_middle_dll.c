#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *nxt;
};
struct Node *insert_middle(struct Node *head)
{
    struct Node *temp=NULL,*nu=NULL,*FP=NULL,*SP=NULL;
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
        FP=head;
        SP=head;
        while(FP->nxt!=NULL && FP->nxt->nxt!=NULL)
        {
                SP=SP->nxt;
                FP=FP->nxt->nxt;
        }
        nu->nxt=SP->nxt;
        nu->prev=SP;
        if(SP->nxt!=NULL)
        {
                SP->nxt->prev=nu;
        }
        SP->nxt=nu;
    }
    return head;

}
int main()
{
    struct Node *head=NULL;
    head=insert_middle(head);
    head->nxt=insert_middle(head);
    printf("%d",head->data);
    return 0;
}