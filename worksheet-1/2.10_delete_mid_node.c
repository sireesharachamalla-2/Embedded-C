#include<stdio.h>
#include<stdlib.h>
struct Node
{
        int data;
        struct Node *link;
};
struct Node *delete_middle_node(struct Node *head)
{
        struct Node *FP=NULL,*SP=NULL,*temp=NULL;
        if(head==NULL)
        {       printf("list is empty\n");
                return head;
        }
        else if(head->link==NULL)
        {
                printf("list hving only one  node\n");
                return head;
        }
        else
        {
                FP=head;
                SP=head;
                while(FP!=NULL && FP->link!=NULL)
                {
                        FP=FP->link->link;
                        temp=SP;
                        SP=SP->link;
                }

                temp->link=SP->link;
                free(SP);

        }
        return head;
}
struct Node *insert_last(struct Node *head,int data)
{
        struct Node *nu=NULL,*temp=NULL;
        nu=(struct Node *)calloc(1,sizeof(struct Node));
        nu->data=data;
        nu->link=NULL;
        if(head==NULL)
        {
                head=nu;
        }
        else
        {
                temp=head;
                for(temp=head;temp->link!=NULL;temp=temp->link);
                temp->link=nu;
        }
        return head;
}
void display(struct Node *head)
{

        struct Node *temp=head;
        while(temp)
        {
                printf("%d ",temp->data);
                temp=temp->link;
        }
        printf("\n");
}
int main()
{
        struct Node *head=NULL;
        head=insert_last(head,10);
        head=insert_last(head,20);
        head=insert_last(head,30);
        display(head);
        head=delete_middle_node(head);
        display(head);
        return 0;
}