#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    struct Node *prev;
    int data;
    struct Node *nxt;
};
struct Node *rev_list(struct Node *head)
{
    struct Node *temp=NULL,*cptr=head;
    if(head==NULL)
    {
        pintf("node not created\n");
        return 0;
    }
    else{
        while(cptr!=NULL)
        {
            temp=cptr->nxt;
            cptr->prev=cptr->nxt;
            cptr->nxt=temp;
            cptr=cptr->prev;
        }
        if(temp!=NULL)
        {
            head=temp->prev;
        }
    }
    return head; 
}
int main()
{
    struct Node *head=NULL;
    head=rev_list(head);
}