#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
//INSERT FIRST
struct Node *Insert_first(struct Node *head)
{
    struct Node *temp=NULL,*newNode=NULL;
    newNode=(struct Node *)malloc(sizeof(struct Node *));
    if(newNode==NULL)
    {
        printf("Node is not created\n");
        return 1;
    }
    printf("enter the data:\n");
    scanf("%d",&newNode->data);
    newNode->link=NULL;
    if(head==NULL)
    {
        head=newNode;
    }
    else{
        newNode=head->link;
        head=newNode;
    }
    return head;
}
//DELETE FIRST
struct Node *del_first(struct Node *head)
{
    struct Node *temp=NULL;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else{
        temp=head;
        head=head->link;
        free(temp);
        temp=NULL;
    }
    return head;
}
//REVERSE LIST
struct Node *reverse_list(struct Node *head)
{
    struct Node *cptr=NULL,*pptr=NULL,*nptr=head;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else if(head->link==NULL)
    {
        printf("list having only one node\n");
    }
    else{
        nptr=head;
        while(nptr)
        {
            pptr=cptr;
            cptr=nptr;
            nptr=nptr->link;
            cptr->link=pptr;   //rev adress is assigned
        }
        head=cptr;
    }
    return head;
}
struct Node *delete_nth_node(struct Node *head)
{
    int n;
    struct Node *temp=NULL,*FP=NULL,*SP=NULL;
    printf("enter the node number\n");
    scanf("%d",&n);
    if(head==NULL)
    {
        printf("List is empty\n");
        return 1;
    }
    else if(head->link==NULL)
    {
        temp=head;
        free(temp);
        temp=NULL;
        return head;
    }
    else
    {
    temp=head;
    FP=head;
    SP=head;
    while(n)
    {
        FP=FP->link;
        n--;
        if(FP->link==NULL)
            return NULL;
    } 
    while(FP->link)
    {
        FP=FP->link;
        SP=SP->link;
    }
    temp=SP->link;
    SP->link=SP->link->link;
    free(temp);
    temp=NULL;
    }
    return head;
}

struct Node *Insert_middle(struct Node *head)
{
    struct Node *newNode=NULL,*FP=NULL,*SP=NULL;
    newNode=(struct Node*)calloc(1,sizeof(struct Node *));
    if(newNode==NULL)
    {
        printf("node not created\n");
        return 1;
    }
    else{
        printf("enter the data  to insert \n");
        scanf("%d",&newNode->data);
    }
    if(head==NULL)
    {
        head-newNode;
    }
    else{
        FP=head;
        SP=head;
        while(FP->link !=NULL&& FP->link)
        {
             SP=SP->link;
            FP=FP->link->link;
            
        }
        newNode->link=SP->link;
        SP->link=newNode;
    }
    return head;
}
struct Node *find_nth_node_last(strcut Node *head)
{
    struct Node *FP=NULL,*SP=NULL;
    int n,i;
    printf("enter nth node from last\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(FP==NULL)
        {
            printf("no nodes\n");
            return NULL;
        }
        FP=FP->link;
    }
    while(FP!=NULL)
    {
        SP=SP->link;
        FP=FP->link;
    }
    return SP;
}

int main()
{
    struct Node *head=NULL;
    int choice,value;
    while(1)
    {
    printf("enter the choice:\n");
    printf("1.insert_first 2.delete first node 3.display 4.reverse_list 5.delte_nth_node 6.Insert_middle 7exit\n ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:head=Insert_first(head);
            break;
        case 2:head=del_first(head);
            break;
        case 3:display(head);
            break;
        case 4:head=reverse_list(head);
            break;
        case 5:head=delete_nth_node(head);
            break;
        case 6:head=Insert_middle(head);
            break;
        case 7:head=find_nth_node_last(head);
            break;
        case 8:exit(0);
            default:printf("invalid choice\n");
    }
}
}