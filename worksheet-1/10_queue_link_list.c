#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct Node
{
        int data;
        struct Node *link;
};
struct Node *front,*rear;
void enq(int data)
{
        struct Node *nu=NULL;
        nu=calloc(1,sizeof(struct Node));
        if(nu==NULL)
        {
                printf("node not created\n");
        }
        else
        {
                nu->data=data;
                if(front==NULL)
                        front=nu;
                else
                {
                        rear->link=nu;
                }
                rear=nu;

        }
}
int deq(void)
{
        int d;
        struct Node *temp=NULL;
        temp=front;
        front=front->link;
        if(front==NULL)
        {
                rear=NULL;
        }
        d=temp->data;
        free(temp);
        temp=NULL;
        return d;
}





int main()
{
        struct Node *head=NULL;
        int choice;
        while(1)
        {

                int data;
                printf("1.enque 2.deque 3.exit\n");
                printf("enter the choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:printf("enter the data ");
                               scanf("%d",&data);
                               enq(data);
                               break;
                        case 2:
                               if(front==NULL)
                                       printf("queue is empty:");
                               else
                                printf("data popped is %d",deq());
                               break;
                        case 3:exit(0);
                        case 4:printf("invalid input\n");
                }
        }
    return 0;
}